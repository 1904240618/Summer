#include <stdio.h>
int main (void)
{
	int i,j;
	double score[2][6],ave1[6],ave2[2];
	printf("Enter 12 це scores:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%lf",&score[i][j]);
			printf("%lf ",score[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<6;j++)
	{
		ave1[j]=(score[0][j]+score[1][j])/2;
		printf("%lf ",ave1[j]);
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		ave2[i]=(score[i][0]+score[i][1]+score[i][2]+score[i][3]+score[i][4]+score[i][5])/6;
		printf("%lf ",ave2[i]);
	}
	return 0;
}
