package com.itheima_01;

import java.io.File;

/*
 * File:文件和目录路径名的抽象表示形式，File 类的实例是不可变的
 * 
 * 构造方法：
 * 		File(File parent, String child) 
 * 		File(String pathname) 
 * 		File(String parent, String child) 
 * 
 * File的常用功能：
 * 		创建功能
 * 			boolean createNewFile()  
 * 			boolean mkdir()  
 * 			boolean mkdirs()  
 * 		删除功能
 * 			boolean delete() 

 * 		获取功能
 * 			File getAbsoluteFile()  
 * 			String getAbsolutePath() 
 * 			String getName()  
 * 			String getParent()  
 * 			File getParentFile() 
 * 			String getPath()  
  			long lastModified() 
  			long length()  
 * 		判断功能
 * 			 boolean exists()  
 * 			 boolean isAbsolute()  
 * 			 boolean isDirectory() 
 			 boolean isFile()  
 			 boolean isHidden()  
 		修改文件名：
 			boolean renameTo(File dest)  
 			 
 * 
 * 
 */
public class FileDemo {
	public static void main(String[] args) {
		//File(String pathname) ：将指定的路径名转换成一个File对象
		//File f = new File("D:\\a\\b.txt");
		
		//File(String parent, String child) : 根据指定的父路径和文件路径创建File对象
		//File f2 = new File("D:\\a","b.txt");
		
		//File(File parent, String child) :根据指定的父路径对象和文件路径创建File对象
		//File parent = new File("D:\\a");
		//File f3 = new File(parent,"b.txt");
		
		File f4 = new File(new File("D:\\a"),"b.txt");
		
	}
}
