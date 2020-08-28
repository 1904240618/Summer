/*斐波那契通过递归实现*/
#include<stdio.h>
int fab(int n)
{
	if(n<1)
	{
		return -1;
	}
	if(n == 1||n == 2)
	{
		return 1;
	}
	else
	    return  fab(n-1)+fab(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fab(n));
}