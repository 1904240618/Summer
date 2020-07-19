#include <stdio.h>
#include <string.h>
int main (void)
{
	char a[20];
	char *p,*q;
	int n;
	printf("Input a:\n");
	gets(a);
	p=a;
	n=strlen(a);
	q=p+n-1;
	while((p!=q)&&(*p==*q))
	{
		p++;
		q--;
	}
	if(p<q)
	{
		printf("No\n");
	}
	else
	{
		printf("yes\n");
	}
	return 0;
} 

