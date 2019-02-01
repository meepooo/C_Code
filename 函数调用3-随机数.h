#include<iostream>
#include<cstdlib>
using namespace std;

enum GameStatus { WIN, LOSE, PLAYING }; //游戏状态

int rollDice() {
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int a = die1 + die2;
	cout << "player rolled " << die1 << "+" <<
	die2 << "=" << a << endl;

	return a;
}



int main{
	int a;
	int myPoint;
	GameStatus status;
	unsigned seed;
	int rollDice();
	cout << "please enter an unsigned integer :  ";
	cin >> seed; //输入随机数种子
	srand(seed); //将种子传给rand()
	a = rollDice(); //第一轮投骰子、计算和数

	switch (a){
	case 7:			//和数为7、11则为胜，状态为WIN
	case 11;
		status = WIN;
		break;		//和数为2、3、12则为负，状态为LOSE
	case 2:			
	case 3:
	case 12:
		status = LOSE ;
		break;
	default:		//其他情况，无结果，状态为PLAYING，记下点数
		status = PLAYING ;
		myPoint = a;
		cout << "point is " << myPoint << endl;
		break ;
	}
	while (status == PLAYING) {		//只要状态为PLAYING，继续
		a = rollDice();
		if (a == myPoint)				//某轮的和数等于点数则取胜
			status = WIN;
		else if (a == 7)					//出现和数为7则为负
			status = LOSE;
	}

	//当状态不为PLAYING的时候循环结束，输出游戏结果
	if (status == WIN)
		cout << "player win" << endl;
	else
		cout << "player lose" << endl;

	return 0 ;
}

