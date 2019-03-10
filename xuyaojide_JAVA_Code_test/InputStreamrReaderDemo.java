package JavaTest01;

import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;

public class InputStreamrReaderDemo {
	public static void main(String[] args) throws IOException {
		//创建输入流对象
		InputStream is = System.in;
		Reader r = new InputStreamReader(is);
		
		//创建输出流对象
		FileWriter fw =new FileWriter("a.txt");
		
		//读写数据
		char[] chs = new char[1024];
		int len;
		while((len = r.read(chs)) != -1) {
			fw.write(chs,0, len);
			fw.flush();			
		}
		//释放资源
		fw.close();
		r.close();
	}
}
