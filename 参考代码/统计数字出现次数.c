#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

 //�Ӽ����������ɸ���������ֵ��1��4��Χ�ڣ��� -1��Ϊ��������ı�־��ͳ��ÿ�������ĸ�����
 //�磺
	// ���룺1 1 2 3 3 3
	// �����	
	//   1����2��
	//   2����1��
	//   3����3��
 //	   4����0��
 //��ÿ�������Υ������

int main()
{
	int arr[4]{ 0 };
	int a = 0;
	char clear = 0;
	do
	{
		scanf("%d", &a);
		while ((clear = getchar()) == ' ');
		if (clear == '\n') break;
		ungetc(clear, stdin);

		if (1 <= a && a <= 4) arr[a - 1]++;
	} while (a != -1);

	for (int i = 0; i < 4; i++)
	{
		printf("%d���ֵĴ�����: %d \n", i + 1, arr[i]);
	}
}

//int main()
//{
//	int num=0;
//	int cnt[5] = { 0 };
//	int j;
//	while (num !=-1)
//	{
//		if (scanf("%d", &num) != '\n')
//		{
//			if (1 <= num && num <= 4) cnt[num]++;
//			if (num == -1)
//			{
//				for (j = 1; j <= 4; j++)
//				{
//					printf("%d���ֵĴ�����%d\n", j, cnt[j]);
//				}
//				break;
//			}
//		}
//		else break;
//	}
//	return 0;
//}  //������ʱ��û�н����β�����-1�����ܵ�����