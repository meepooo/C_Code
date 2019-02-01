#include<iostream>
using namespace std;

class Clock
{
public:
	Clock (int newH,int newM, int newS);//构造函数（用来初始化类）其中，函数名必须与类名相同
	void setTime(int newH =0,int newM=0, int newS =0);
	void showTime();
private:
	int hour,minute,second;
}

	void Clock::setTime(int newH,int newM, int newS) //说明不是全局函数，只是Clock这个类中的函数
	{
	hour =newH;
	minnute = newM;
	second =newS;
	}	
	void Clock::showTime()
	{
	cout<<hour<<":"<<minute<<":"<<second;
	}

int main()
{
	Clock myClock; 				//必须先定义一个实例(对象),用于接下来调用
	myClock.setTime(8,30,30);   //调用类中的函数，必须先定义一个实例（myClock）,再用实例去调用这个函数
	myClock.showTime();
		
	return 0;
}