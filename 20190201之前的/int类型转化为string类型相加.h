#include<iostream>
#include<string>
using namespace std;


string add(string a, string b) {
	string sum;
	sum = a + b;
	return sum;
}

int main() {
	string a;
	string b;
	cout << "write value A :";
	cin >> a;
	cout << "write  value B :";
	cin >> b;
	string c = add(a, b);
	cout << "A add B is :" << c << endl;


	return 0;
}