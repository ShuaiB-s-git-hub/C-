#include<stdio.h>
int main()
{
	while (1)
	{
		int score = 0;
		scanf("%d", &score);
		if (0 <= score && 100 >= score)
		{
			short level = score / 10;
			switch (level)
			{
			case 10:
			case 9:
				printf("����\n");
				break;
			case 8:
				printf("����\n");
				break;
			case 7:
			case 6:
				printf("����\n");
				break;
			default:
				printf("������\n");
			}
		}
		else printf("������ĳɼ���������������\n");
	}
}