#include <stdio.h>
int main (void)
{
	double c,f;
	printf("Enter 华氏温度:");
	scanf("%lf",&f);
	c=5/(9*(f-32));
	printf("摄氏温度为%lf",c);
	return 0;
}
