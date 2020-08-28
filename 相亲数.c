#include <stdio.h>
#define N 10000
void main()
{
    int i,j,k;
    unsigned s[N];

    for(i=2;i<N;i++)
    {
        for(j=1,s[i]=0;j<i;j++)
        {
            if(i%j==0)
                s[i]+=j;
        }
    }
    for(i=2;i<N;i++)
    {
        j=s[i];
        if(j>N)
            continue;//
        if(i==s[j]&&j>i)
        {
            printf("%d: ",i);
            for(k=1;k<i;k++)
                if(i%k==0)
                    printf("%d ",k);
                    printf("\n");
                    printf("%d: ",j);
            for(k=1;k<j;k++)
                if(j%k==0)
                    printf("%d ",k);
                    printf("\n\n");
        }
    }
}
