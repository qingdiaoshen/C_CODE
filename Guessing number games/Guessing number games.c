#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//猜数字游戏
//1. 电脑随机生成一个1-100之间的数字
//2. 玩家猜数字
//   如果猜对了，就提示：猜对了
//   如果猜错了，就提示：猜大了，或者猜小了，直到猜正确
//3. 反复玩

void menu()
{
	printf("******************************\n");
	printf("***********1.play*************\n");
	printf("***********0.exit*************\n");
	printf("******************************\n");
}


void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	//rand()函数可以用来生成一系列伪随机值,它是根据一个数(种子)为基准按照神秘的递推公式推算出来的一系列数,如果种子相同，那么后面产生的随机数也是相同的。
	//每一次调用都会生成下一个数字,一次调用还是当前的数字.
	//需要引入#include <stdlib.h>
	//如要产生[m, n]范围内的随机数num，可用：
	//int num = rand() % (n - m + 1) + m;


	printf("请猜数字\n");
	while (1)
	{
		scanf("%d", &guess);
		getchar();
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//rand()函数每次调用前都会查询是否调用过srand(seed)，是否给srand设定了一个值，如果有的话，它就会自动调用srand（seed）一次来初始化它的起始值。
	//如果之前没有srand（seed），那么系统会自动给seed赋值初始值为1，然后rand()调用它一次。

	//我们常常使用时间戳（从1970年1月1日0时0分0秒到现在时间一共有多少秒）来获取时间。
	//time()函数用来获取系统时间，返回类型是time_t（长整型）类型，里面的参数是time_t*（指针类型）
	//time()需要引入#include <time.h>。
	//NULL是空指针。



	char input = 0;
	do
	{
		if (input == '0')//为零终止循环,结束游戏.
		{
			break;
		}
		menu();
		printf("请选择:");
		scanf("%c", &input);
		switch (input)
		{

		case '1':
			game(); //猜数字游戏主体
			Sleep(4000);
			system("cls");
			break;

		case '0':
			printf("退出程序\n");
			Sleep(1000);
			system("cls");
			break;

		default:
			printf("请重新输入\n");
			Sleep(1000);
			system("cls");
			break;
		}


	} while (input == '1' || input != '1');
	//input为1的时候，再一次进入循环询问玩家是否玩游戏。
	//input为0的时候，不再进入循环，游戏结束了。
	//input为非零的时候，进入循环，让玩家重新选择。
	return 0;
}




