#include<stdio.h>
#include<string.h>
//���õݹ鷽����5���׳ˡ�����������ֱ�ӻ��߼�ӵ����������������
#define err 0
int fac(int n)
{
	if (n > 0)
	{
		if (n == 1)
		{
			return 1;
		}
		else
		{
			return n*fac(n - 1);
		}
	}
	else
	{
		printf("������һ��������\n");
		return err;
	}
}

int main()
{
	printf("%d\n", fac(-1));
}
