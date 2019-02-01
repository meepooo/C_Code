/*多文件结构与编译预处理命令

C++程序的一般组织结构
·一个工程可以划分为多个源文件，例如：
	·类声明文件（.h文件）
	·类实现稳健（.cpp文件）
	·类的使用文件（main()所在的.cpp文件）
·利用工程来组合各个文件。

例：       */

//文件1，类的定义，Point.h
class Point {
	public:		//外部接口
		Point(int x=0,int y=0):x(x),y(y){}
		Point(const Point &p);
		~Point(){count--;}
		int getX()const{return x;}
		int getY()const{return y;}
		static void showCount();//静态数据成员
	private:	//私有数据成员
	int x;
	int y;
	static int count; //静态数据成员
};
//文件2，类的实现，Point.cpp
#include"Point.h"       //双引号中加文件名，是在当前目录搜索
#include<iostream>
using namespace std;

int Point::count =0; //使用类名初始化静态数据成员

Point::Point(const Point &p):x(p.x),y(p.y){
	count ++;
}

void Point::showCount(){
	cout<<"Object count = "<<count<<endl;
}

//文件3，主函数，5_10.cpp
#include"Point.h"
#include<iostream>
using namespace std;

int main(){
	Point a(4,5);      //定义对象a,其构造函数使count增1
	cout<<"Point A : "<<a.getX()<<","<<a.getY();
	Point::showCount();//输出对象个数
	Point b(a):		   //定义对象b,其构造函数使count增1
	cout<<"Point B : "<<b.getX()<<","<<b.getY();
	Point::showCount();//输出对象个数	
	
	return 0;
}