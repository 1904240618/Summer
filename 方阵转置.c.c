#include <stdio.h>
int main (void)
{
	int i,j,n,item;
	int a[6][6];
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		a[i][j]=i*n+j+1;
		printf("%d ",a[i][j]);
	}
	printf("\n");
    }
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	{
		item=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=item;
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	printf("%d ",a[i][j]);
	printf("\n");
    }
	return 0;
}
