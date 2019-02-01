             常类型
			 
<> 常对象：必须进行初始化，不能被更新。
   const 类名 对象名;

<> 常成员：
   用const 进行修饰的类成员：常数据成员与常函数成员。

<>常引用：
  被引用的对象不能被更新。
  const 类型说明符 &引用名; 
  
  
/*常对象
<>用const修饰的对象。
<>例：
class A{
	public:
	A(int i,int j){x=i;y=j;}
	
	private:
	int x;
	int y;
};

A const a(3,4);  //a是常对象，不能被更新

思考：哪些操作有试图改变常对象状态的危险？  


常成员：用const 修饰的对象成员
<>常成员函数
·使用const关键字说明的函数。
·常成员函数不能更新对象的数据成员。
·常成员函数说明格式：
   类型说明符 函数名(参数表)const;
   这里，const是函数类型的一个组成部分，因此在实现部分
   也要带const关键字。
·const关键字可以被用于参与对重载函数的区分。
·通过常对象只能调用它的常成员函数。
<>常数据成员。
·使用const说明的数据成员。

例：*/

#include<iostream>
using namespace std;

class R{
	public:
	R(int r1,int r2):r1(r1),r2(r2){}
	void print();
	void print() const;
	private:
	int r1;
	int r2;	
}
void R::print(){
	cout<<r1<<";"<<r2<<endl;
}

void R::print()const{
	cout<<r1<<";"<<r2<<endl;
} 

int main(){
	R a(5,4);
	a.print();  //调用void print()
	constR b(20,52);
	b.print();  //调用void print() const
	
	return 0;
}

