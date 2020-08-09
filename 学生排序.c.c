#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sum
{
    int num;
    int soc;
    ;
};
int main()
{
    int n,i,j;
    struct sum sum[10];
    struct sum temp;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&sum[i].num,&sum[i].soc);
        getchar();
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(sum[j].soc<sum[i].soc)
    		{
    			temp=sum[j];
    			sum[j]=sum[i];
    			sum[i]=temp;
			}
		}
    }
    for(i=0;i<n;i++)
    {
    	printf("%d %d",sum[i].num,sum[i].soc);
    	printf("\n");
	}
    return 0;
}
