/*
*
*
*输出乘法口诀表
*/

public class Test_20190213_cfkjb{
	public static void main(String[] args){
		for(int m=1 ; m<=9 ; m++){
			for(int i=1 ; i<=m ; i++){
				System.out.print(i + "*"+ m + "=" + (i*m) + "\t");
			}
			System.out.println();		
		}	
	}
}
