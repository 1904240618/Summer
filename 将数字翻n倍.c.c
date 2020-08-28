#include <stdio.h>
int main (void)
{
	int i,j,n;
	int a[3][3];
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter 9 ¸ö number:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=n*a[i][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
