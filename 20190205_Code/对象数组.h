/*对象数组

对象数组的定义与访问

<>定义对象数组
类名  数组名[元素个数];

<>访问对象数组元素
通过下标访问：数组名[下标].成员名


对象数组的初始化：
<>数组中每一个元素对象被创建时，系统都会调用
类构造函数初始化该对象

<>通过初始化列表赋值
例：Point a[2]={Point(1,2),Point(3,4)};

<>如果没有为数组元素指定显示初始值，
数组元素便使用默认值初始化(调用默认构造函数)


数组元素的构造和析构

<>构造数组时，元素所属的类未声明构造函数，
则采用默认构造函数
<>各元素对象的初始值要求为相同的值时，
可以声明具有默认形参值的构造函数
<>各元素对象的初值要求为不同的值时，需要声明
带形参的构造函数
<>当数组中每一个对象被删除时，系统都要调用一次析构函数

例：怎样定义与使用一个对象数组*/
//Point.h

#indef_POINT_H
#define_POINT_H
class Point{ //类的定义
	public:
	Point();
	Point(int x,int y);
	~Point();
	void move(int newX,int newY);
	int getX() const {return x;}
	int getY() const {return y;}
	static void showCount();   //静态函数
	private:				   //私有数据成员
	int x;
	int y;
};

#endif//_POINT_H

//Point.cpp
#include<iotream>
using namespace std;
Point::Point():x(0),y(0){
	cout<<"Default Constructor called."<<endl;
}
Point::Point(int x,int y):x(x),y(y){
	cout<<"Constructor called. "<<endl;
}
Point::~Point(){
	cout<<"Destructor called."<<endl;
}

void Point::move(int newX,int newY){
	cout<<"Moving the point to ("<<newX<<","<<newY<<")"<<endl;
	x-newX;
	y=newY;
	
}



// cpp
#include"Point.h"
#include<iostream>
using namespace std;

int main(){
	cout<<"Entering main..."<<endl;
	Point a[2];
	for(int i=0;i<2;i++)
		a[i].move(i+10,i+20);
	cout<<"Exiting main..."<<endl;
	return 0;
}