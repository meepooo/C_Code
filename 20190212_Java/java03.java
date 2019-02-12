/*
 * 求奇数偶数之和
 * 
 * 
 * */
public class Test_20190212_for2jishuoushuhe {
	public static void main(String[] args) {
		int oddsum=0;
		int evensum=0;
		for(int i=0;i<=1000;i++) {
			if(i%2!=0) {
				oddsum = oddsum + i;
			}else {
				evensum = evensum + i;
			}
		}
		System.out.println("奇数的和为："+oddsum);
		System.out.println("偶数的和为："+evensum);
	}
}
