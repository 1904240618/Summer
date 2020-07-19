#include <stdio.h>
int main (void)
{
	int i,n,k,index;
	int a[10];
	int b[10];
	printf("Enter number:");
	scanf("%d",&n);
	printf("Enter %d number:",n);
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	b[i]=a[n-1-i];
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
	return 0;
}
