#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,p,area; 
    printf("Enter a b c:");
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
    if(a+b>c&&b+c>a&&a+c>b)
    {   
		p=(a+b+c)/2;
		area=sqrt(p*(p-a)*(p-b)*(p-c)); 
		printf("�����ε����Ϊ��%lf\n",area); 
	} 
	else 
		printf("���ܹ���������\n");
    }
    return 0;
}
