/*                   第六章小结：

<>对象的生存期、作用域与可见性
<>类的静态成员
<>数据的共享与保护
<>友元
<>编译预处理命令
<>多文件结构和工程

例：数据的共享与保护

程序结构
数据共享
作用域
生存期

一：作用域
*/

#include<iostream>
using namespace std;

void fn1();			//全局变量的作用域为文件作用域，
int x=1;			//在整个程序运行期间有效
int y=2;

int main(){
	cout<<"Begin..."<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	cout<<"Evaluate x and y in mian()..."<<endl;
	
	int x=10;		//如果在局部模块中声明了同名的变量，
	int y=20;		//则在局部模块中，可见的是局部变量
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	cout<<"setp into fn1()..."<<endl;
	fn1();
	
	cout<<"Back in main "<<endl;
	cout<<"x= "<<x<<endl;
	cout<<"y="<<y<<endl;
	
	return 0;
}


