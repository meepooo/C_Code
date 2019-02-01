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


string strWithout3a3b(int x,int y){
	int x;
	int y;
	string c=aa;
	string d=b;
	if (x > b*3)
	cout<<"wrong"<<endl;
	else
	string n = d+c;	
	for (i=0;i>=3;i--){
		i=(x/3);
		n += n ;
	}
	
	string sum = n;
	
	return sum;
}

int main(){
	int x;
	int y;
	cout << "write value A :";
	cin >> x;
	cout << "write  value B :";
	cin >> y;
	string c = strWithout3a3b(x, y);
	cout << "A add B is :" << c << endl;
	
	return 0;
}


