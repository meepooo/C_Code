#include<iostream>
using namespace std;

int add(int a,int b) {
	int sum;
	sum = a + b;

	return sum;
}

int main() {
	int a;
	int b;
	cout<< "input value A :";
	cin >> a;
	cout <<"input  value B :";
	cin >> b;
	int c = add(a,b);
	cout << "A add B is :" << c << endl;


	return 0;
}