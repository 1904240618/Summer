#include <stdio.h>
int main (void)
{
	int i,n,m,item,j;
	int a[10];
	printf("Enter n:");
	scanf("%d",&n);
	printf("������%d����",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("��������������ڼ������:");
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
