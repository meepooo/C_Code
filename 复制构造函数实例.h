#include<iostream>
using namespace std;

class Point{
	public:
	
	Point();
	
	
		int getY()const{
			
			return y;
		}
	
	private: //私有数据
	int x,y;
	
}
//成员函数的实现
Point::Point(const Point &p){
	x=p.x;
	y=p.y;
	cout<< "Calling the copy construct "<<endl;
}

//形参为Point类的函数
void fun1(point p){
	cout<<p.getX()<<endl;
	//p.setX(1);
}

//返回值为Point类对象的函数
Point fun2(){
	Point a;
	return a;
}

//主程序
int main (){
	Point a;//第一个对象A
	Point b(a); //情况一，用A初始化B。第一次调用复制构造函数
	cout<< b.getX()<<endl;
	fun1(b);	//情况二，对象B作为fun1的实参。第二次调用复制构造函数
	b=fun2();	//情况三，函数的返回值是类对象，函数返回时，调用
	cout<<b.getX()<<endl;
	
	return 0;	
}