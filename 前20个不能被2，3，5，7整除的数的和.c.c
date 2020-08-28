#include <stdio.h>
int main (void)
{
	int i,sum=0,j=0;
	for(i=1;i<=1000;i++)
	{
		if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)
		{
			sum=sum+i;
			j++;
		}
		if(j>=20)
		break;
	}
	printf("%d",sum);
	return 0;
}
