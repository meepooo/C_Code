#include<iostream>
using namespace std;

//类定义
class Clock
{
public:
	Clock (int newH,int newM, int newS);//构造函数（用来初始化类）其中，函数名必须与类名相同
	void setTime(int newH =0,int newM=0, int newS =0);
	void showTime();
private:
	int hour,minute,second;
};
//构造函数的实现
Clock::Clock(int newH,int newM, int newS):
hour(newH),minute(newM),second(newS)	//初始化列表 newH——newH(下)。。。
{
	
}


	void Clock::showTime()
	{
	cout<<hour<<":"<<minute<<":"<<second;
	}

int main()
{
	Clock c(0,0,0); 			//自动调用构造函数
	c.showTime();				//调用类中的函数，必须先定义一个实例（c）,再用实例去调用这个函数
		
	return 0;
}