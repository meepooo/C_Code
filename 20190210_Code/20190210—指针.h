/*指针的初始化和赋值

指针变量的初始化

<>语法形式
储存类型 数据类型 *指针名 = 初始地址;

<>例：

int *pa =&a;

<>注意事项
用变量地址作为初值时，该变量必须在指针初始化之前已声明过，
且变量类型应与指针类型一致。

可以用一个已有合法值的指针去初始化另一个指针变量。

不要用一个内部非静态变量去初始化 static 指针。

指针变量的赋值运算
<>语法形式   指针名=地址
<>注意：
	“地址”中存放的数据类型与指针类型必须相符
	向指针变量赋的值必须是地址常量或变量，不能是普通整数
<>例如：
	通过地址运算“&”求得已定义的变量和对象的起始地址
	动态内存分配成功时返回的地址
<>例外：
	整数0可以赋给指针，表示空指针
<>允许定义或声明指向void 类型的指针。该指针可以被赋予
任何类型对象的地址

例：void *general;        	*/


#include<iostream>
using namespace std;

int main(){
	int i;				 //定义int 型数i
	int *ptr = &i;		 //取i的地址赋给ptr	
	i=10;				 //int 型数赋初值
	cout<<"i= "<<i<<endl;//输出int 型数的值
	cout<<"*ptr = "<< *ptr<<endl;//输出int型指针所指地址的内容
	return 0;
}


//运行结果:
//i=10
//*ptr =10

#include<iostream>
using namespace std;
int main(){
	//!void voidObject; 错，不能声明void类型的变量
	void *pv;  //对，可以声明void类型的指针
	int i=5;
	pv =&i;				//void类型指针指向整型变量
	int *pint = static_cast<int *>(pv);//void指针转换为int指针
	cout<<"*pint = "<<*pint<<endl;
	return 0;
}