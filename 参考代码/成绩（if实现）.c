#include<stdio.h>
int main()
{
	while (1)
	{
		int score = 0;
		scanf("%d", &score);
		if (0 <= score && 100 >= score)
		{
			if (100 >= score && 90 <= score)  printf("����\n");
			else if (80 <= score && 89 >= score)  printf("����\n");
			else if (60 <= score && 79 >= score)  printf("����\n");
			else  printf("������\n");
		}
		else printf("������ĳɼ���������������\n");
	}
}