#include<stdio.h>
int main()
{
    int t = 0;
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        t = t*10+n%10;
        n = n/10;
    }
    printf("%d\n",t);
}
