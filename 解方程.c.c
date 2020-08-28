#include <stdio.h>
#include <math.h>
int main (void)
{
	double a,b,c;
	double x1,x2,detal;
	printf("输入二次项系数:");
	scanf("%lf",&a);
	printf("输入一次项系数:");
	scanf("%lf",&b);
	printf("输入常数项系数:");
	scanf("%lf",&c);
	if(a==0)
	{
		x1=-c/b;
		printf("这不是一元二次方程");
		printf("只有一个解为%lf",x1);
	}
	if(a!=0)
	{
		detal=b*b-4*a*c;
		if(detal<0)
		{
			printf("这个方程无实根"); 
		}
		if(detal==0)
		{
			x1=(-b+sqrt(detal))/(2*a);
			printf("这个方程有两个相同的实根");
			printf("方程的解为%lf",x1);
		}
		if(detal>0)
		{
			x1=(-b+sqrt(detal))/(2*a);
			x2=(-b-sqrt(detal))/(2*a);
			printf("这个方程有两个不同的实根");
			printf("方程的两个解为%lf  %lf",x1,x2);
		}
	}
	return 0;
}
