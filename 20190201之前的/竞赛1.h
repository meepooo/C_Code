/*
给定两个整数 A 和 B，返回任意字符串 S，要求满足：
•S 的长度为 A + B，且正好包含 A 个 'a' 字母与 B 个 'b' 字母；
•子串 'aaa' 没有出现在 S 中；
•子串 'bbb' 没有出现在 S 中。

输入：A = 1, B = 2
输出："abb"
解释："abb", "bab" 和 "bba" 都是正确答案。

输入：A = 4, B = 1
输出："aabaa"
*/


#include<iostream>
using namespace std;


string strWithout3a3b(int a,int b){
	int a;
	int b;
	string c=a;
		for (i=0;i>2;i--){
		i=a;
		char x;
		if (x == '1')
			value += static_cast <int>(power(2, i));
		
	}
	string d=b;
	string sum =d+c;
	
	return sum;
}

int main(){
	int a;
	int b;
	cout << "write value A :";
	cin >> a;
	cout << "write  value B :";
	cin >> b;
	string c = strWithout3a3b(a, b);
	cout << "A add B is :" << c << endl;
	
	return 0;
}


int main() {
	int value = 0;
	cout << "Enter an 8 bit binary number    ";
	for (int i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if (ch == '1')
			value += static_cast <int>(power(2, i));
	}
	cout << "decimal value is  " << value << endl;

	return 0 ;
}

double  power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x ;
	return val ;
}




