//静态函数，静态成员举例

#include<iostream>
using namespace std;

class Point{
	public:
	 Point(int x=0,int y=0):x(x),y(y){count++;}//构造函数
	
	 Point(Point &p){	//复制构造函数
		 x= p.x;
		 y= p.y;
		 count++;
	 }
	~Point(){count--;} //析构函数
	int getX(){return x;}
	int getY(){return y;}
	static void showCount(){
		cout<<"Object count = "<< count <<endl;
	}
	private:
	int x;
	int y;
	static int count;   //静态数据成员声明，用于记录点的个数
};

int Point::count = 0;   //静态数据成员的定义与初始化
					    //使用类名限定
int main(){
	Point::showCount(); //输出对象个数
	Point a(4,5);       //定义对象a,其构造函数回使count增1
	cout<<"Point A : "<<a.getX()<<","<<a.getY();
	Point::showCount(); //输出对象个数
	
	return 0;
}