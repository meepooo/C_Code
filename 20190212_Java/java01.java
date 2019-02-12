/**
* 测试while循环的用法
*
*/
public class Test_20190212_while {
	public static void main(String[] args) {
		int a=1;							//循环初始化
		while(a<=100) {						//循环条件判断
			System.out.println(a);			//循环体
			a++;							//迭代
		}
		System.out.println("循环结束");
		
		//计算从1累加到100
		int b = 1;
		int sum =0;
		while (b<=100) {
			sum = sum+b;
			b++;
		}
		System.out.println("和为：" +sum);
		
	}
}
