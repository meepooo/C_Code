/*数组作为函数参数


<>数组元素作实参，与单个变量一样。

<>数组名作实参，形、实参数都应该是数组名，
类型要一样，传送的是数组首地址。
对形参数组的改变会直接影响到实参数组。


主函数中初始化一个二维数组，表示一个矩阵，
矩阵，并将每个元素都输出，然后调用子函数，
分别计算每一行的元素之和，将和直接存放在每行
的第一个元素中，返回主函数之后输出各行元素的和。*/


#include<iostream>
using namespace std;

void rowSum(int a[][4],int nRow){ //计算二维数组A每行元素的值的和
	for (int i=0;i<nRow;i++){
		for (int j=1;j<4;j++)
			a[i][0]+=a[i][j];
	}
	
}

int main(){
	int table[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
	for(int i=0;i<3;i++){  //输出数组元素
		for (int j=0;j<4;j++)
			cout<<table[i][j]<<"     ";
		cout<<endl;
	}
	rowSum(table,3);   //调用子函数，计算各行和
	for(int i=0;i<3;i++)//输出计算结果
		cout<<"Sum of row "<<i<<"is"<<table[i][0]<<endl;
	return 0;
}
