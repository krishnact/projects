package grailsclient.jwt;
import groovy.json.JsonBuilder
import groovy.json.JsonOutput
import groovy.json.JsonSlurper
import org.grails.springsecurityrest.client.Jwt
import org.grails.springsecurityrest.client.JwtImpl


class FileJwtStorage implements JwtStorage {

    String path
    long expiresAt = 0;
	JwtImpl jwt_= null;
	boolean hasJwtToken = false
    FileJwtStorage(String path) {
        this.path = path
		loadJwt()
    }

    @SuppressWarnings('JavaIoPackageAccess')
    static save(Object content, String filePath) {
        new File(filePath).text = new JsonBuilder(content).toPrettyString()
    }

    @SuppressWarnings('JavaIoPackageAccess')
    static Object load(String filePath) {
        new JsonSlurper().parseText(new File(filePath).text)
    }

    String filePath() {
        return path
    }

	public boolean needsRefresh() {
		long now = System.currentTimeMillis()
		return ( now > (expiresAt -60000));
	}
	
	@Override
	Jwt getJwt() {
		return jwt_
	}
	
    
    Jwt loadJwt() {
		try {
	        //def obj = load(filePath())
	        def slurper = new JsonSlurper()
	        def result = slurper.parse(new File(filePath()))
	
	        jwt_ = new JwtImpl()
	        jwt_.with {
	            accessToken = result.access_token
	            refreshToken = result.refresh_token
	            expiresIn = result.expires_in
	            roles = result.roles as List<String>
	            tokenType = result.tokenType
	            username = result.username
	        }
			if (result.expires_at == null) {
				this.expiresAt = System.currentTimeMillis()
			}else {
				this.expiresAt = result.expires_at;
			}
			this.hasJwtToken = true
		}catch(Exception ex) {
			jwt_ = null
			this.hasJwtToken = false
		}
        return jwt_
    }

    @Override
    void saveJwt(Jwt jwt) {
        String jsonString = jsonStringWithJwt(jwt)
        //save(jsonString, filePath())
		new File(filePath()).text = jsonString
		
    }

    String jsonStringWithJwt(Jwt jwt) {
        def m = [access_token: jwt.accessToken,
                 refresh_token: jwt.refreshToken,
                 roles: jwt.roles,
                 expires_in: jwt.expiresIn,
                 token_type: jwt.tokenType,
                 username: jwt.username,
				 expires_at: System.currentTimeMillis()+ jwt.expiresIn*1000l]
        JsonOutput.toJson(m)
    }
	
	public boolean needsAuth() {
		return !this.hasJwtToken
	}
}