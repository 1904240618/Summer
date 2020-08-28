#include <stdio.h>
#include <math.h>
int main (void)
{
	double e,item=1,sum=1,n=1,d=1;
	while(fabs(item)>=0.000001)
	{
		d=d*n;
		item=1/d;
		sum=sum+item;
		n++;
	}
	e=sum;
	printf("%lf",e);
	return 0;
}
 
