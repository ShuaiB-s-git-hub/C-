#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������¶��壺
//	char str[20] = ��Hello World!��;
//	�����ַ��������ļ���test1.txt���У�Ȼ������Ӵ��ļ��ж�ȡ����
//	�����������������ɺ�������Ϊ!dlroW olleH
int main()
{
	char str[] = "Hello World!";
	FILE* fp = fopen("text1.txt", "w");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return EOF;
	}
	else
	{
		printf("�ļ��򿪳ɹ�\n");
	}
	fprintf(fp, str);
	fclose(fp);

	fp = fopen("text1.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return EOF;
	}
	else
	{
		printf("�ļ��򿪳ɹ�\n");
	}

	for (int i = 1; i <= (sizeof(str) / sizeof(str[0])); i++)
	{
		fseek(fp, -i, SEEK_END);
		printf("%c", fgetc(fp));
	}
	printf("\n");

	fclose(fp);

}