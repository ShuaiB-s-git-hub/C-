
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//ʹ��ѭ���ͷ�֧�ṹ�ж�һ�����Ƿ�Ϊ������
//��1����������������ָ����1����Ȼ��������1�͸��������⣬�޷���������Ȼ��������������

int main()
{
	while (1)
	{

		int a, flag = 1;  //flag���ڽ��������������ִ�forѭ�����ó�ȥ
		scanf("%d", &a);
		if (a > 1)
		{
			int i = 0;
			for (i = 2; i <= sqrt((double)a); ++i)
			{
				if (a % i == 0)
				{
					printf("�ⲻ������\n");
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				printf("��������\n");
			}
		}
		else
		{
			printf("������һ������1����Ȼ��");
		}
	}
}