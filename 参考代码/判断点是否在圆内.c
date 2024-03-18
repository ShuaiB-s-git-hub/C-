#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�Ӽ�������һ�����һ��Բ���жϵ��Բ��λ�ù�ϵ��������x��y����ȷ����Բ��Բ�ĺͰ뾶ȷ����
//����Բ������( x0, y0) ��Բ�İ뾶ΪR���������(x, y) ��
//�жϵ���Բ�ڣ�(x - x0) * (x - x0) + (y - y0) * (y - y0) <= R*R
//�жϵ���Բ�⣺(x - x0) * (x - x0) + (y - y0) * (y - y0) > R*R

typedef struct
{
	double x;
	double y;
}point, *ppoint;

typedef struct
{
	double R;
	point center;
}circle, *pcircle;

enum {
	in_circle,
	on_circle,
	out_circle
}c;

int WhereIsPoint(const ppoint p, const pcircle r)
{
	double IS = (p->x - r->center.x)*(p->x - r->center.x) +
		(p->y - r->center.y)*(p->y - r->center.y);
	const double R2 = r->R*r->R;
	if (IS == R2) return on_circle;
	if (IS < R2)  return in_circle;
	if (IS>R2)	  return out_circle;
}


int main()
{
	point p;
	circle c;
	printf("������һ��Բ<Բ�뾶��Բ�ĺ����꣬Բ��������>\n");
	scanf("%lf %lf %lf", &(c.R), &(c.center.x), &(c.center.y));

	printf("������һ����<x,y>\n");
	scanf("%lf %lf", &(p.x), &(p.y));
	switch (WhereIsPoint(&p, &c))
	{
	case in_circle:
		printf("�������Բ��\n");
		break;
	case on_circle:
		printf("�������Բ��\n");
		break;
	case out_circle:
		printf("����㲻��Բ��\n");
		break;
	default:
		printf("���ߣ���bug�ˣ�\n");
	}
}