#include <stdio.h>
#include <stdlib.h>
#include <process.h>
int main (void)
{
	FILE *fp=NULL,*fq=NULL;
	int num;
	char name[20];
	int i,score1,score2,score3;
	if((fp=fopen("c:\\test.txt.txt","r"))==NULL)
	{
		printf("File open error!\n");
		exit(0);
	}
	if((fq=fopen("c:\\test.txt","a+"))==NULL)
        {
        	printf("File open error!\n");
        	exit(0);
		}
	for(i=0;i<4;i++)
	{
		fscanf(fp,"%d%s%d%d%d",&num,name,&score1,&score2,&score3);
		printf("%d  %s  %d  %d  %d\n",num,name,score1,score2,score3);
		fprintf(fq,"%d  %s  %d  %d  %d\n",num,name,score1,score2,score3);
	}
	if(fclose(fq))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
	if(fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(0);
	}
} 
