#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������������ҵ����13��

//��дһ������ʵ�����¹��ܣ�
//�Ӽ�������һ��Сд��ĸ������ת��Ϊ��Ӧ�Ĵ�д��ĸ�������

int main()
{
	char wd = 0;
	scanf("%c", &wd);
	if (wd >= 97 || wd <= 122)
	{
		wd -= 32;
		//���߿���д��
		//wd &= 0xdf;
		printf("%c\n", wd);
	}
	else
	{
		printf("������Сд��ĸ\n");
	}
}

