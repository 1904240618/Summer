#include <stdio.h>
int main (void)
{
	int n,i,index;
	int a[10];
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter %d number:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	index=0;
	for(i=1;i<n;i++)
	if(a[i]>a[index])
	{
		index=i;
	}
	printf("%d\n%d",a[index],index);
	return 0;
}
