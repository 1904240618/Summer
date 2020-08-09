#include <stdio.h>
int main (void)
{
	int i,j,n;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("%d ",i);
		printf("\n");
	}
	return 0;
}
