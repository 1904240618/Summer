#include <stdio.h>
int main (void)
{
	int i,j,m,n,x,y,item;
	int a[6][6];
	printf("Enter m and n:");
	scanf("%d%d",&m,&n);
	if(n>=1&&n<=6)
	{
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
		{
			for(y=1;y<=m;y++)
			{
				item=a[i][n-1];
				for(x=n-1;x>0;x--)
				{
					a[i][x]=a[i][x-1];	
				}
				a[i][0]=item;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			    printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
