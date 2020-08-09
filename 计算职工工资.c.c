#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sum
{
    char name[30];
    float money1;
    float money2;
    float money3;
};
int main()
{
    int n,i;
    struct sum sum[10];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s %f %f %f",sum[i].name,&sum[i].money1,&sum[i].money2,&sum[i].money3);
        getchar();
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    	printf("%s %f",sum[i].name,sum[i].money1+sum[i].money2-sum[i].money3);
    	printf("\n");
    }
    return 0;
}
