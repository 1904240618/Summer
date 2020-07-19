#include <stdio.h>
#include <string.h>
char *search(char *s,char *t);
int main (void)
{
	char a[20],b[20],*p;
	gets(a);
	gets(b);
	p=search(a,b);
	if ( p != NULL )
        printf("%d\n", p - a);
    else
        printf("-1\n");

	return 0;
} 
char *search(char *s,char *t)
{
	int lens=strlen(s);
    int lent=strlen(t);
    int i,j,k;
    int x=lens-lent;
    for (i=0; i<=x; i++)
    {
        for (j=0,k=i; j<lent; j++,k++)
        {
            if (s[k]!=t[j]) break;
        }
        if (j==lent)
            break;
    }
    if (i<=x) return s+i;
    else return NULL;
}
