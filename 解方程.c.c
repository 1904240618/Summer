#include <stdio.h>
#include <math.h>
int main (void)
{
	double a,b,c;
	double x1,x2,detal;
	printf("���������ϵ��:");
	scanf("%lf",&a);
	printf("����һ����ϵ��:");
	scanf("%lf",&b);
	printf("���볣����ϵ��:");
	scanf("%lf",&c);
	if(a==0)
	{
		x1=-c/b;
		printf("�ⲻ��һԪ���η���");
		printf("ֻ��һ����Ϊ%lf",x1);
	}
	if(a!=0)
	{
		detal=b*b-4*a*c;
		if(detal<0)
		{
			printf("���������ʵ��"); 
		}
		if(detal==0)
		{
			x1=(-b+sqrt(detal))/(2*a);
			printf("���������������ͬ��ʵ��");
			printf("���̵Ľ�Ϊ%lf",x1);
		}
		if(detal>0)
		{
			x1=(-b+sqrt(detal))/(2*a);
			x2=(-b-sqrt(detal))/(2*a);
			printf("���������������ͬ��ʵ��");
			printf("���̵�������Ϊ%lf  %lf",x1,x2);
		}
	}
	return 0;
}
