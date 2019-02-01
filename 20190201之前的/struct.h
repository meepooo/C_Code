#include<iostream>
using namespace std;

//结构体
struct	class{
	int age;
	char sex;
	string name ;
	
}


//联合体
//特点：成员共用同一组成员；任何两个成员不会同时有效
/*
union 联合体名称{
	公有成员
	protected:
	保护型成员
	private:
	私有成员
};
*/

//使用联合体保存成绩信息，并且输出
#include <string>
#include<iostream>
using namespace std;

class Examinfo{
	private:
	string name;//课程名称
	enum{GRADE,PASS,PERCENTAGE}mode;//计分方式
	union{
		char grade;//等级制成绩
		bool pass;//只记是否通过课程的成绩
		int percent;
	}
}




int main (){

	return 0;
}