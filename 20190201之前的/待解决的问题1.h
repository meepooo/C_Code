#include<iostream>
using namespace std;

int digui(int n)     //求n与n递减至1的和
{
	int n;
	int m;
	m = 0;
	for (n = 0; n > 0; n--)
	{
		m = n + m;
	};
	return m;
}

int main()
{
	int n;
	n = 0;
	cout << "input a value : \n";
	cin >> n;  //输入一个数
	cout << "the sum is : " << digui(n);

	return 0;
}
