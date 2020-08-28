#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum=0,p=1,n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("负数没有阶乘\n");
        exit(0);
    }
    for(i=1;i<=n;i++)
    {
        p=p*i;
        sum=sum+p;
    }
    printf("阶乘的和为%d\n",sum);
}
