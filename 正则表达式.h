#include<iostream>
using namespace std;

int main (){
	
	int a,b,x;
	
	cout << "input values of a : \n";
	
	cin >>a;
	
	cout << "input values of b : \n";
	
	cin >>b;

	x= (a-b)>0 ? (a-b) : (b-a) ; 
	
	cout <<"the different from a and b is \n"<<x ;

	return 0 ;
};