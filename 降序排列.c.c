#include <stdio.h>
int main (void)
{
	int i,n,m,item,j;
	int a[10];
	printf("Enter n:");
	scanf("%d",&n);
	printf("请输入%d个数",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("请输入你想输出第几大的数:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(a[i]<a[j])
	{
		item=a[i];
		a[i]=a[j];
		a[j]=item;
	}
	printf("%d",a[m-1]);
	return 0;
}
