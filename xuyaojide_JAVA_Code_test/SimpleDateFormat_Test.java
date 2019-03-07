package JavaTest01;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class SimpleDateFormatTest {
	public static void main(String[] args) throws ParseException {
		//使用指定的模式进行对象的创建
		//1970年01月01日 00:00:00   
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy年MM月dd日 HH:mm:ss");
		
		//格式化
		Date date =new Date();
		System.out.println(date);
		String s = sdf.format(date);
		System.out.println(s);
		
		//解析
		Date date2 =sdf.parse(s);
		System.out.println(date2.toLocaleString());
		
	}
}
