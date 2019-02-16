package leecode;

import java.util.Scanner;

/*
 * 爱丽丝有一手（hand）由整数数组给定的牌。 
现在她想把牌重新排列成组，使得每个组的大小都是 W，且由 W 张连续的牌组成。
如果她可以完成分组就返回 true，否则返回 false。
 *
 * 示例：
输入：hand = [1,2,3,6,2,3,4,7,8], W = 3
输出：true
解释：爱丽丝的手牌可以被重新排列为 [1,2,3]，[2,3,4]，[6,7,8]。
 * */

//hand 数组中数据的个数
//	数组个数是否能被W整除
public class shunzi {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("输入一个数组 hand：");
		int[] arr = sc.nextInt();
		
		System.out.println("输入需要分组的W的值：");
		int W = sc.nextInt();
		
		
		System.out.println("结果为："+result(arr, W));
	}
}
//判断是否可以组成一手顺子
public static  boolean result(int[] arr,int W) {
	int[] hand=arr;
	if (hand.length % W != 0) {                     //如果数组长度不能被W整除，返回false
        return false;
	}else if( hand.length == 0){				     //如果数组长度等于0，返回false
        return false;
	}else if(hand.length != 0 & W == 1){    //如果数组长度不为0，并且分组个数为1，返回true
        return true;
	}else {													
		
	}
}


//取该数组最小值Min，然后取第二个最小值，看第二个最小值是否比第一个最小值大1
//是，就接着取第三个..一直.取到第W个，不是  就报错
public static int getMin() {
	//随便定义一个最小的数组元素,循环挨个比较，取出该数组中的最小值
	int[] arr;
	int Min = arr[1];
	for(int x=0;x<arr.length;x++) {
		if (arr[x]<Min) {
			Min=arr[x];
		}
	}
	//System.out.println("第一个数组为：["+Min+ (Min+1)+ (Min+2)+ ......(Min+(W-1))"]");
	return Min;
}