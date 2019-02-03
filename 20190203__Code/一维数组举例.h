/*一维数组举例
<>循环从键盘读入若干组选择题答案，计算并输出每组
答案的正确率，直到输出ctrl+z为止

<>每组连续输入5个答案，每个答案可以是'a'..'d'。
*/

#include<iostream>
using namespace std;

int main(){
const char key[]={'a','c','b','a','d'};
const int NUM_QUES=5;
char c;
int ques =0,numCorrect=0;
cout<<"Enter the "<<NUM_QUES<<"question tests:"<<endl;
while (cin.get(c)){
	if(c!='\n'){
		if(c==key[ques]){
			numCorrect++;cout<<" ";
		}else
			cout<<"*";
		ques++;
	}else{
		cout<<"Score"<<static_cast<float>(numCorrect)/NUM_QUES*100<<"%";
		ques=0;numCorrect=0;cout<<endl;
		}
	}
	
	return 0;
}


/*运行结果：

Enter the 5 question test 
acbba
	**Score 60%
acbad
	**Score 100%
abbda
	**Score 40%
bdcba
	**Score 0%



