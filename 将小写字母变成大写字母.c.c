#include <stdio.h>
int main (void)
{
	int i,ch,j;
	char a[80];
	printf("Enter ch:");
	i=0;
	ch=getchar ();
	a[i]=ch;
	while(ch!='\n')
	{
		a[i]=ch;
		i++;
		ch=getchar ();
	}
	a[i]='\0';
	j=0;
	while(a[j]!='\0')
	{
		if(a[j]>='a'&&a[j]<='z')
		{
			a[j]=a[j]-('a'-'A');
		}
		putchar(a[j]);
		j++;
	}
	return 0;
}
