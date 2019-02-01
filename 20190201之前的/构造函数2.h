
#include<iostream>
using namespace std;

class Clock{							  //时钟类的定义
	public:								  //外部接口，公有成员函数
		Clock(int newH,int newM,int newS);//构造函数（带参数）
		Clock();						  //默认构造函数（无参数）一般都会写上
		void setTime(int newH,int newM,int newS);
		void showTime();
	provite:							  //私有数据成员
		int hour,int minute,int second;
};

void Clock::setTime(int newH,int newM, int newS) 
{
	hour =newH;
	minnute = newM;
	second =newS;
}	
void Clock::showTime()
{
	cout<<hour<<":"<<minute<<":"<<second;
}

//时钟类成员函数的具体实现
Clock::Clock():hour(0),minute(0),second(0){}//默认构造函数的实现
Clock::Clock(int newH,int newM,int newS):hour(newH),minute(newM),second(newS){}

int main(){
	Clock c1(8,10,0);	//调用有参数的构造函数（如果有参数，且是整形，则自动匹配到之前的整型构造函数）
	Clock c2();			//调用无参数的构造函数（如果不给参数，就默认调用无参数的构造函数）
	c1.showTime();
	c2.showTime();
	return 0;
}