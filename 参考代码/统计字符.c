#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// ��д����ʵ�����¹��ܣ�
// 	 ��дһ������������ͳ��һ���ַ�������ĸ�����֡��ո�������ַ��ĸ�����
//	 ����������������ַ����󣬵������������������ͳ�ƽ����Ҫ����ָ��ʵ�֡�
// 	 �磺�ַ���"a1! B@2 c3 # &"��
//	 ������Ϊ����ĸ��3����������3�����ո���4���������ַ�4��


void count(char* ch)
{
	int cnt_word = 0;
	int cnt_blank = 0;
	int cnt_num = 0;
	int cnt_other = 0;

	for (int i = 0; *(ch + i) != '\0'; i++)
	{
		if ('A' <= *(ch + i) && *(ch + i) <= 'Z' || 'a' <= *(ch + i) && *(ch + i) <= 'z')
		{
			cnt_word++;
		}
		else if ('0' <= *(ch + i) && *(ch + i) <= '9')
		{
			cnt_num++;
		}
		else if (*(ch + i) == ' ')
		{
			cnt_blank++;
		}
		else
			cnt_other++;

	}

	printf("���ַ�������ĸ��%d��\n", cnt_word);
	printf("���ַ����пո���%d��\n", cnt_blank);
	printf("���ַ�����������%d��\n", cnt_num);
	printf("���ַ����������ַ���%d��\n", cnt_other);
}


int main()
{
	char ch[100] = "ymrYJ\t156  ";

	count(ch);
}



