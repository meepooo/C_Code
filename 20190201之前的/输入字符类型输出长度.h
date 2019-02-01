#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	char a;
	char b;
	cout << "please enter an size\n\n";
	cin >> a;
	cout << "the size of an "<<char(a)<<" is : \t"<<sizeof (a)<<" byte.\n\n";
	cout << "please enter an new size\n\n";
	cin >> b;
	cout << "the size of an new size " << char(b) << "is : \t" << sizeof(b) << " byte.\n\n";

	Sleep(8000);
	return 0;

}
/*
	cout << "the size of an int is : \t"<<sizeof(int)<<" byte.\n\n";
	cout << "the size of an char is : \t"<<sizeof(char)<<" byte.\n\n";
	cout << "the size of an long is : \t"<<sizeof(long)<<" byte.\n\n";
	cout << "the size of an float is : \t"<<sizeof(float)<<" byte.\n\n";
	cout << "the size of an short is : \t"<<sizeof(short)<<" byte.\n\n";
	cout << "the size of an double is : \t"<<sizeof(double)<<" byte.\n\n";
*/