#include<cstdio>
#include<cstring>
 
typedef long long LL;
 
char b[1000010];
 
LL eular(LL k)
{
    LL s=1;
    for (LL i=2;i*i<=k;i++)
    {
        if (k%i==0)
        {
            k=k/i,s*=(i-1);
            while (k%i==0)
            k=k/i,s*=i;
        }
    }
    if (k>1) s*=k-1;
    return s;
}
 
LL quick_pow(LL x,LL y,LL p)
{
    LL ans=1;
    for (;y;y>>=1)
    {
        if (y&1) ans=(LL)ans*x%p;
        x=(LL)x*x%p;
    }
    return ans;
}
 
int main()
{
    LL a,c,x,y;
    while (~scanf("%I64d",&a))
    {
        scanf("%s",b);
        scanf("%I64d",&c);
        LL phi=eular(c);
        x=y=0;
        LL len=strlen(b);
        for (LL i=0;i<len;i++)
        {
            x=x*10+b[i]-'0';
            if (y==0&&x>=phi) y=phi;
            x%=phi;
        }
        printf("%I64d\n",quick_pow(a,x+y,c));
    }
    return 0;
}

