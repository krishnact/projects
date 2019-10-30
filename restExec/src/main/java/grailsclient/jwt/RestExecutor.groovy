package grailsclient.jwt;

import java.lang.reflect.Type

import org.grails.springsecurityrest.client.AuthenticationRequest
import org.grails.springsecurityrest.client.GrailsSpringSecurityRestClient
import org.grails.springsecurityrest.client.Jwt
import org.grails.springsecurityrest.client.JwtResponseOK
import org.grails.springsecurityrest.client.RefreshRequest


import com.google.gson.Gson
import com.google.gson.reflect.TypeToken

import groovy.transform.CompileStatic
import groovy.transform.TypeCheckingMode
import okhttp3.HttpUrl
import okhttp3.MediaType
import okhttp3.OkHttpClient
import okhttp3.Request
import okhttp3.RequestBody
import okhttp3.Response

public class RestExecutor {
	private static final String API_VERSION = '1.0'
	private static final String HTTP_HEADER_ACCEPT_VERSION = 'Accept-Version'
	private static final String HTTP_HEADER_ACCEPT = 'Accept'
	private static final String HTTP_HEADER_ACCEPT_VALUE = 'application/json'
	private static final String HTTP_HEADER_AUTHORIZATION = 'Authorization'
	private static final String HTTP_HEADER_AUTHORIZATION_BEARER = 'Bearer'
	private static final MediaType JSON 	= MediaType.parse("application/json; charset=utf-8");
	private final OkHttpClient client = new OkHttpClient()

	private final JwtStorage jwtStorage
	private final String serverUrl
//	abstract void okResponseHandler();
//	abstract void notOkResponseHandler();
	String username
	String password
	
	public RestExecutor(String serverUrl, JwtStorage jwtStorage, String username = null, String password = null) {
        this.serverUrl = serverUrl
        this.jwtStorage = jwtStorage
		this.username = username
		this.password = password
    }
	
	private void fetchResponse(Response response, Closure listener) {
		if ( response.code() == 200 ) {
			processOKAPIResponse(response, listener)
			return
		}

		if (response.code() == 401) {
			refreshAccessToken()
			Response rsp = executeApi()
			if (rsp.code() == 200) {
				processOKAPIResponse(response, listener)
				return
			}
		}

		listener(null, APIError.NETWORKING_ERROR)
	}
	
	@CompileStatic(TypeCheckingMode.SKIP)
	private static void processOKAPIResponse(Response response, Closure listener) {
		try {

			def jsonString = response.body().string()
			listener(jsonString, APIError.NONE)
		} catch (IOException e) {
			listener(null, APIError.JSON_PARSING_ERROR)
		}
	}
	
	private Response executeApi() throws IOException {
		Request request = new Request.Builder()
				.header(HTTP_HEADER_ACCEPT_VERSION, API_VERSION)
				.header(HTTP_HEADER_ACCEPT, HTTP_HEADER_ACCEPT_VALUE)
				.header(HTTP_HEADER_AUTHORIZATION, authorizationHeaderValue())
				.url("${serverUrl}/api/v1/chargeSession/startCharge")
				.get()
				.build()
		client.newCall(request).execute()
	}
	
	private String authorizationHeaderValue() {
		"${HTTP_HEADER_AUTHORIZATION_BEARER} ${jwtStorage.jwt.accessToken}"
	}
	
	/**
	 * Public method
	 * @param listener
	 */
	public void callApi(Closure listener) {
		try {
			ensureAuth()
			Response response = executeApi()
			fetchResponse(response, listener)

		} catch (IOException e) {
			listener(null, APIError.NETWORKING_ERROR)
		}
	}

	
	/**
	 * Public method
	 * @param listener
	 */
	public void get(String path, Map params, Closure listener) {
		try {
			String urlPath = "${serverUrl}${path}"
			HttpUrl.Builder urlBuilder = HttpUrl.parse(urlPath).newBuilder();
			params.forEach { t, u -> urlBuilder.addQueryParameter(t,u.toString())}

			String url = urlBuilder.build().toString();
			
			Request request = new Request.Builder()
				.header(HTTP_HEADER_ACCEPT_VERSION, API_VERSION)
				.header(HTTP_HEADER_ACCEPT, HTTP_HEADER_ACCEPT_VALUE)
				.header(HTTP_HEADER_AUTHORIZATION, authorizationHeaderValue())
				.url(url)
				.get()
				.build()

			Response response = client.newCall(request).execute()
			fetchResponse(response, listener)

		} catch (IOException e) {
			listener(null, APIError.NETWORKING_ERROR)
		}
	}

	
	
	/**
	 * Public method
	 * @param listener
	 */
	public void postJson(String path, String jsonData, Closure listener) {
		try {
			HttpUrl.Builder urlBuilder = HttpUrl.parse("${serverUrl}${path}").newBuilder();
			
			String url = urlBuilder.build().toString();
			RequestBody body = RequestBody.create(JSON, jsonData);
			Request request = new Request.Builder()
				.header(HTTP_HEADER_ACCEPT_VERSION, API_VERSION)
				.header(HTTP_HEADER_ACCEPT, HTTP_HEADER_ACCEPT_VALUE)
				.header(HTTP_HEADER_AUTHORIZATION, authorizationHeaderValue())
				.url(url)
				.post(body)
				.build()

			Response response = client.newCall(request).execute()
			fetchResponse(response, listener)

		} catch (IOException e) {
			listener(null, APIError.NETWORKING_ERROR)
		}
	}

	
	@SuppressWarnings('Instanceof')
	private void refreshAccessToken() {
		String refreshToken = jwtStorage?.jwt?.refreshToken
		def refreshRequest = new RefreshRequest.Builder()
				.serverUrl(serverUrl)
				.refreshToken(refreshToken)
				.build()
		def client = new GrailsSpringSecurityRestClient()
		def jwtResponse = client.refreshToken(refreshRequest)
		if ( jwtResponse instanceof JwtResponseOK) {
			Jwt jwt = (jwtResponse as JwtResponseOK).jwt
			jwtStorage?.saveJwt(jwt)
		}
	}

	public void ensureAuth() {
		if ( jwtStorage.needsAuth())
			{
				authenticate(username, password)
			}else if (jwtStorage.needsRefresh()){
				refreshAccessToken();
			}else {
				println "Using old"
			}
	}
	
	@SuppressWarnings('Instanceof')
	void authenticate(String username, String password) {

		def client = new GrailsSpringSecurityRestClient()
		def authenticationRequest = new AuthenticationRequest.Builder()
				.serverUrl(serverUrl)
				.username(username)
				.password(password)
				.build()
		def rsp = client.authenticate(authenticationRequest)
		if (rsp instanceof JwtResponseOK) {
			jwtStorage?.saveJwt(((JwtResponseOK) rsp).jwt)
		}
	}
}
