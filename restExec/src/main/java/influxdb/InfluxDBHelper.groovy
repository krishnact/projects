package influxdb;
import java.text.SimpleDateFormat
import java.util.Date;
import java.util.Map;

public class InfluxDBHelper {
	private static String Decimal=/^(?=.)([+-]?([0-9]*)(\.([0-9]+))?)$/
	private static String Int    =/^(?=.)([+-]?([0-9]*)(([0-9]+))?)$/
	private static SimpleDateFormat  FILENAME_SDF = new SimpleDateFormat("yyyyMMdd'T'HHmmss");
	
	private static Map replacements = $/ =,"/$.split("").collectEntries{it->[it,java.util.regex.Matcher.quoteReplacement($/\/$+it)]}

	File folder;
	
	long flushPeriodSec = 60;
	private long lastFlush; 
	List<String> lines = [];
	public InfluxDBHelper(String folder) {
		this.folder = new File(folder);
		if (!this.folder.exists()) {
			this.folder.mkdirs();
		}
	}
	
	public void addRecord(		
		String measurement, 
		List valuesList, 
		List tags, 
		String timestampField, 
		long nanoConversion,
		Map<String, String> additionalTags = [:]) {
		if (lastFlush + flushPeriodSec*1000 < System.currentTimeMillis()) {
			writeToFile();
		}
		
		lines << mapToInfluxDBLine(measurement, valuesList, tags, timestampField, nanoConversion, additionalTags)
	}
	
	private void writeToFile() {
		File tmpFile = new File(this.folder, "data.${FILENAME_SDF.format(new Date())}.influx.tmp")
		String fileContent = '';
		synchronized (lines) {
			fileContent = lines.join("\n");
			lines.clear();
		}
		if (fileContent != '') {
			tmpFile.text = fileContent;
			File dataFile = new File(this.folder, "data.${FILENAME_SDF.format(new Date())}.influx")
			tmpFile.renameTo(dataFile);
		}
		lastFlush = System.currentTimeMillis()
	}
	
	public static String mapToInfluxDBLine(
		String measurement, 
		List valuesList, 
		List tags, 
		String timestampField, 
		long nanoConversion,
		Map<String, String> additionalTags = [:]
		) {
		StringBuffer strBuff = new StringBuffer();
		String common= escape(" ,",measurement);

		valuesList.each{Map value->
			strBuff.append(common);
		        def fieldTags= tags.findAll{value[it]!=null && value[it]!=''}.collect{String key->
				String aVal = value[key];
				value.remove(key)
				return escape(", =",key) +'='+
						escape(", =",aVal);
			};
			tags.each{String key ->
				value.remove(key)
			}	
			additionalTags.each{
                                if ( it.split(/=/).length > 1)
				fieldTags << it
			}
			String tagsStr = fieldTags.join(',');
			strBuff.append(',');
			strBuff.append(tagsStr);
			strBuff.append(' ');
			
			long tsVal = value[timestampField]*nanoConversion ;
			value.remove(timestampField)
			def valsToWrite = value.collect{String key,Object val->
				String aKey =  escape(", =",key);
				//println val.class.name
				if ( val.class.name == 'java.lang.String') {
						return aKey +'="'+escape('"',(String)val)+'"';
				}else if ( val.class.name == 'java.lang.Long') {
						return aKey +'='+escape('"',(String)val) +'i';
				}else if ( val.class.name == 'java.lang.Double' || val.class.name == 'java.lang.Boolean'){
					return aKey +'='+String.format("%.2f",val)
				}else {
					return null;
				}
			};
			valsToWrite.removeAll([null])
			String valuesStr = valsToWrite.join(',');
			//strBuff.append(common)
			strBuff.append(valuesStr)
			strBuff.append(' ')
			strBuff.append(tsVal)
			strBuff.append("\n")
		}

		return strBuff.toString();
	}
	
	private static String escape(String charsToEscape, String text) {
		if (text == null)
			return "";
		String retVal = text;
		charsToEscape.split("").each{
			String repl = replacements[it]
			retVal = retVal.replaceAll(it,repl)
		}
		
		return retVal;
	}
	
	void uploadAFile() {
		
	}
}
