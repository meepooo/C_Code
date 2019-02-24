package leecode;
/*
 * 在一个小镇里，按从 1 到 N 标记了 N 个人。传言称，这些人中有一个是小镇上的秘密法官。

如果小镇的法官真的存在，那么：

小镇的法官不相信任何人。
每个人（除了小镇法官外）都信任小镇的法官。
只有一个人同时满足属性 1 和属性 2 。
给定数组 trust，该数组由信任对 trust[i] = [a, b] 组成，表示标记为 a 的人信任标记为 b 的人。

如果小镇存在秘密法官并且可以确定他的身份，请返回该法官的标记。否则，返回 -1
 * 
 *分析：
 *		1.定义一个二维数组
 *		2.二维数组内容要求：
 *				A.必须至少存在（N-1）个数组
 *				B.[[1,3],[1,4],[2,3],[2,4],[4,3]]
 *				C.存在只有一个数没有出现在数组第一个
 *
 *				D.有一个数(法官)出现（N-1）次，且这个数(法官)不在数组第一个
 *
 * 				E.找到出现(N-1)次的数，且这个数不在第1，3，5，7，9....位上
 * */
public class findJudge {
			public static void main(String[] args) {
				int N = 0;
				int[][] trust = {{1,3},{1,4},{2,3},{2,4},{4,3}};
				//System.out.println(trust.length);
				findJudge( N,trust);
			}
			
			public static int findJudge(int N, int[][] trust) {
			
				//必须至少存在（N-1）个数组
				if(trust.length<(N-1)) {
					return -1;
				}else {
					for(int x=0;x<trust.length;x++){
						for(int y=0;y<trust[y].length;y++){
							System.out.print(trust[x][y]);
							//int array =trust[x][y];
							//System.out.print("---------");
							//System.out.println(array);
							//int m=((int)array/10)%10;
							//int m=(int)array%10;
							//System.out.print(m);
				//存在只有一个数没有出现在数组第一个
							
				//法官只出现（N-1）次，且法官不在数组第一个
							//找到出现(N-1)次的数，且这个数不在第1，3，5，7，9....位上
									//找到出现(N-1)次的数，且这个数不在奇数位上
						
						}
						//System.out.println(array);
					}
					return N;
				
				}
		    }

		
			
}
			
			
