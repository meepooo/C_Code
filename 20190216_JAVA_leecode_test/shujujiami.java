package com.itheima;

import java.util.Scanner;

/*
 * 需求：键盘录入数据,要求数据是四位的整数,现需要对数据进行加密,加密规则如下:
 * 每位数字都加上5,然后除以10的余数代替该数字,
 * 再将第一位和第四位交换,第二位和第三位交换,
 * 请把加密后的数据输出到控制台
 * 
 * 分析：
 * 		A:键盘录入一个4位数
 * 			举例：4567
 * 		B:定义一个长度为4的数组
 * 			int[] arr = new int[4];
 * 			arr = {4,5,6,7};
 * 		C:对数组中的数据进行加密规则的操作
 * 			每位数字都加上5,然后除以10的余数代替该数字
 * 				arr[x] += 5;
 * 				结果：arr = {9,10,11,12};
 * 				arr[x] %= 10;
 * 				结果：arr = {9,0,1,2};
 * 			再将第一位和第四位交换,第二位和第三位交换
 * 				结果：arr = {2,1,0,9};
 *		D:请把加密后的数据输出到控制台
 */
public class Test9 {
	public static void main(String[] args) {
		//键盘录入一个4位数
		Scanner sc = new Scanner(System.in);
		//接收数据
		System.out.println("请输入一个4位数：");
		int number = sc.nextInt();
		
		//定义一个长度为4的数组
		int[] arr = new int[4];
		arr[0] = number/10/10/10%10;
		arr[1] = number/10/10%10;
		arr[2] = number/10%10;
		arr[3] = number%10;
		
		//对数组中的数据进行加密规则的操作
		//每位数字都加上5,然后除以10的余数代替该数字
		for(int x=0; x<arr.length; x++) {
			arr[x] += 5;
			arr[x] %= 10;
		}
		
		//再将第一位和第四位交换,第二位和第三位交换
		int temp = arr[0];
		arr[0] = arr[3];
		arr[3] = temp;
		
		temp = arr[1];
		arr[1] = arr[2];
		arr[2] = temp;
		
		//请把加密后的数据输出到控制台
		for(int x=0; x<arr.length; x++) {
			System.out.print(arr[x]);
		}
		System.out.println();
	}
}
