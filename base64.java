import java.util.Base64;
import java.util.UUID;
import java.io.UnsupportedEncodingException;
public class HelloWorld{
	public static void main(String[] args) {
		try {
			String sampleBase64EncoStr = Base64.getEncoder().encodeToString("Apple8".getBytes("utf-8"));
			System.out.println("Encoded string (Basic) looks like this: "+sampleBase64EncoStr);
			byte[] base64decodedBytes = Base64.getDecoder().decode(sampleBase64EncoStr);
			System.out.println("Decoded string is "+new String(base64decodedBytes, "utf-8"));
			sampleBase64EncoStr = Base64.getUrlEncoder().encodeToString("Apple8".getBytes("utf-8"));
			System.out.println("Encoded string (URL) looks like this: "+sampleBase64EncoStr);
			StringBuilder strBuild = new StringBuilder();
			for(int i = 0; i<10; ++i) {
				strBuild.append(UUID.randomUUID().toString());
			}
			byte[] sampleMimeBytes = strBuild.toString().getBytes("utf-8");
			String sampleMimeEncoStr = Base64.getMimeEncoder().encodeToString(sampleMimeBytes);
			System.out.println("Encoded String(MIME) looks like this "+sampleMimeEncoStr);
		}
		catch(UnsupportedEncodingException u) {
			System.out.println("Unsupported Encoding Error: "+u.getMessage());
		}
	}
} 
