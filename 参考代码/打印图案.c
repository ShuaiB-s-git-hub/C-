#include<stdio.h>
int main()
{
	int kg = 0;
	for (int i = 0; i <= 6; i++)
	{
		for (int j = 0; j <= i - 1; j++)printf(" ");
		printf("******\n");
	}
}