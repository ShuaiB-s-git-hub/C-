#define _CRT_SECURE_NO_WARNINGS
//��д����ʵ�����¹��ܣ�
//	��ȭС��Ϸ��ʯͷ������
//	��Ϸ����ʯͷ���Ƽ������������Ʋ���������ʯͷ��
//	��д����Ϸ������ʵ����Һ͵��Զ�ս��
//	���������ȭ�������������srand()��rand()��time(NULL)�������������Ҫ����ͷ�ļ�stdlib.h��time.h����
//	������롰ʯͷ / ���� / �������г�ȭ����Ҫ����ʯͷ��������ö����������¼����
//	��Һ͵��Կ���ѭ����β�ȭ���жϲ�ȭ�Ľ����
//	������Ӯ������������Ӯ�ˡ��������������������������ˡ��������ƽ���������ƽ�֡���
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef enum {
	scissor,
	paper,
	stone
}play;

void write_state(const char hum[], int*h)
{
	if (strcmp(hum, "ʯͷ") == 0)
	{
		*h = stone;
	}
	if (strcmp(hum, "����") == 0)
	{
		*h = scissor;
	}
	if (strcmp(hum, "��") == 0)
	{
		*h = paper;
	}
}
void print_com(const int com)
{
	switch (com)
	{
	case scissor:
		printf("���Գ��ļ���\n");
		break;
	case paper:
		printf("���Գ��Ĳ�\n");
		break;
	case stone:
		printf("���Գ���ʯͷ\n");
		break;
	default:
		printf("���ߣ���bug�ˣ�\n");
		break;
	}
}

void who_win(const int hum, const int com)
{
	if (hum == scissor&&com == paper ||
		hum == stone&&com == scissor ||
		hum == paper&&com == stone)
		printf("���Ӯ��\n");
	if (hum == scissor&&com == scissor ||
		hum == stone&&com == stone ||
		hum == paper&&com == paper)
		printf("ƽ��\n");
	if (com == scissor&&hum == scissor ||
		com == stone&&hum == stone ||
		com == paper&&hum == paper)
		printf("ƽ��\n");
}


void game()
{
	int hum, com;
	char human[6];
a:
	printf("������ ʯͷ������\n");
	scanf("%s", &human);
	if (strcmp(human, "ʯͷ") != 0 &&
		strcmp(human, "����") != 0 &&
		strcmp(human, "��") != 0)
	{
		printf("�������\n");
		goto a;
	}
	write_state(human, &hum);
	com = rand() % 3;
	who_win(hum, com);
	print_com(com);
}

int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		char play;
		printf("���������Ŷ��Ҫ��һ���̼���ʯͷ������С��Ϸ��Y\\N\n");
		scanf("%c", &play);
		switch (play)
		{
		case 'Y':
		case 'y':
			game();
			break;
		case 'N':
		case 'n':
			goto BREAK;
			break;
		default:
			printf("С���ӣ���Ȱ�㲻Ҫ���£�\n");
		}

	}
BREAK:
	return 0;
}