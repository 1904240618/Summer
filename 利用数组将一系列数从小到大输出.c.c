#include <stdio.h>
int main (void)
{
	int n,i,index,j,item;
	int a[10];
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter %d number:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		index=i;
		for(j=1+i;j<n;j++)
	    if(a[j]<a[index])
	    {
	    	item=a[j];
	    	a[j]=a[index];
	    	a[index]=item;
		}
		printf("%d ",a[index]);
	}		
	return 0;
}
