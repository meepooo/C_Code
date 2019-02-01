#include<iostream>
using namespacestd;

int fac(int n){
	int d;
	if (n== 0)
	d=1;
	else
	d=fac(n-1)*n;
	return d;
}

int main(){
	int n;
	cout <<"inpit a value : ";
	cin>>n;
	cout<<"the sum is : \n"<<fac(n);	
	
	return 0;
}