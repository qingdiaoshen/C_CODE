//�ػ�С����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//д��һ:��gotoд
int main()
{
	char input[1000] = { 0 };
	system("shutdown -s -t 180");//shutdown -s -t (ʱ��)ϵͳ����ػ�
	continues:                   //shutdown -aϵͳ����ֹͣ�ػ�
	printf("��ļ��������3���Ӻ�ػ��������Ҫ��ֹ�ػ�������������\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ�����strcmp()����������ж�Ϊ0��˵���������ַ������.
	{
		system("shutdown -a");
		printf("������ȷ���ػ���ֹ\n");
	}
	else
	{
		printf("�����������������\n");
		Sleep(2000);
		system("cls");
		goto continues;
	}
	return 0;
}



//д��������whileд
//int main()
//{
//	char input[1000] = { 0 };
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		printf("��ļ��������3���Ӻ�ػ��������Ҫ��ֹ�ػ�������������\n�����룺");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("������ȷ���ػ���ֹ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//			Sleep(2000);
//			system("cls");
//		}
//	}
//	return 0;
//}