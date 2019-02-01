/*
class 类名{
	public：
	类名（形参）；//构造函数
	类名（const 类名 &对象名）：//复制构造函数
}；

类名::类（const 类名 &对象名）//复制构造函数的实现
{
	函数体
}
*/

#include<iostream>
using namespace std;

class Clock{
	public:
	Clock();					 //构造函数
	Clock(const Clock &myClock); //复制构造函数
	
}

//复制构造函数的实现
Clock::Clock(const	Clock &myClock){};
