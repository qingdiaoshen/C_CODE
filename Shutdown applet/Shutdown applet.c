//关机小程序
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//写法一:用goto写
int main()
{
	char input[1000] = { 0 };
	system("shutdown -s -t 180");//shutdown -s -t (时间)系统命令关机
	continues:                   //shutdown -a系统命令停止关机
	printf("你的计算机将于3分钟后关机，如果想要终止关机请输入我是猪\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串用strcmp()函数，如果判断为0就说明这两个字符串相等.
	{
		system("shutdown -a");
		printf("输入正确，关机终止\n");
	}
	else
	{
		printf("输入错误，请重新输入\n");
		Sleep(2000);
		system("cls");
		goto continues;
	}
	return 0;
}



//写法二：用while写
//int main()
//{
//	char input[1000] = { 0 };
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		printf("你的计算机将于3分钟后关机，如果想要终止关机请输入我是猪\n请输入：");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("输入正确，关机终止\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//			Sleep(2000);
//			system("cls");
//		}
//	}
//	return 0;
//}