#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//��������Ϸ
//1. �����������һ��1-100֮�������
//2. ��Ҳ�����
//   ����¶��ˣ�����ʾ���¶���
//   ����´��ˣ�����ʾ���´��ˣ����߲�С�ˣ�ֱ������ȷ
//3. ������

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
	//rand()����������������һϵ��α���ֵ,���Ǹ���һ����(����)Ϊ��׼�������صĵ��ƹ�ʽ���������һϵ����,���������ͬ����ô��������������Ҳ����ͬ�ġ�
	//ÿһ�ε��ö���������һ������,һ�ε��û��ǵ�ǰ������.
	//��Ҫ����#include <stdlib.h>
	//��Ҫ����[m, n]��Χ�ڵ������num�����ã�
	//int num = rand() % (n - m + 1) + m;


	printf("�������\n");
	while (1)
	{
		scanf("%d", &guess);
		getchar();
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//rand()����ÿ�ε���ǰ�����ѯ�Ƿ���ù�srand(seed)���Ƿ��srand�趨��һ��ֵ������еĻ������ͻ��Զ�����srand��seed��һ������ʼ��������ʼֵ��
	//���֮ǰû��srand��seed������ôϵͳ���Զ���seed��ֵ��ʼֵΪ1��Ȼ��rand()������һ�Ρ�

	//���ǳ���ʹ��ʱ�������1970��1��1��0ʱ0��0�뵽����ʱ��һ���ж����룩����ȡʱ�䡣
	//time()����������ȡϵͳʱ�䣬����������time_t�������ͣ����ͣ�����Ĳ�����time_t*��ָ�����ͣ�
	//time()��Ҫ����#include <time.h>��
	//NULL�ǿ�ָ�롣



	char input = 0;
	do
	{
		if (input == '0')//Ϊ����ֹѭ��,������Ϸ.
		{
			break;
		}
		menu();
		printf("��ѡ��:");
		scanf("%c", &input);
		switch (input)
		{

		case '1':
			game(); //��������Ϸ����
			Sleep(4000);
			system("cls");
			break;

		case '0':
			printf("�˳�����\n");
			Sleep(1000);
			system("cls");
			break;

		default:
			printf("����������\n");
			Sleep(1000);
			system("cls");
			break;
		}


	} while (input == '1' || input != '1');
	//inputΪ1��ʱ����һ�ν���ѭ��ѯ������Ƿ�����Ϸ��
	//inputΪ0��ʱ�򣬲��ٽ���ѭ������Ϸ�����ˡ�
	//inputΪ�����ʱ�򣬽���ѭ�������������ѡ��
	return 0;
}




