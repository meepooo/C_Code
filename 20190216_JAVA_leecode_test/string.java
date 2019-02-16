package com.itheima_04;
/*
 * 数组数据类型的转换
 * 
 * 
 */
public class string {
	public static void main(String[] args) {

		String x = "abcde";			   //将一个String数组转换成char
		char[] ss = x.toCharArray();
		 System.out.println(ss);
		 System.out.println(x);
		 
		 char[] yy = x.toCharArray();     //将一个char数组转换成String
		 String.valueOf(yy);
		 System.out.println(x);
		 System.out.println(yy);
		 
		}
}

