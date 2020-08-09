#include <stdio.h>
#include <string.h>
#include <process.h>
int icmp(char *a,char *b);
int main (void)
{
	FILE *fp1,*fp2;
	int n,flag;
	n=0;
	flag=0;
	char c1[100],c2[100];
	if((fp1=fopen("c:\\a.txt","r"))==NULL)
	{
		printf("file open error!\n");
		exit(0);
	}
	if((fp2=fopen("c:\\b.txt","r"))==NULL)
	{
		printf("file open error!\n");
		exit(0);
	}
	while(!feof(fp1)&&!feof(fp2))
	{
		fgets(c1,100,fp1);
		fgets(c2,100,fp2);
		n++;
		if(strcmp(c1,c2))
		{
			printf("第%d行第%d个字符不相同\n",n,icmp(c1,c2));
			flag=1;
			break;
		}
		fflush(fp1);
        fflush(fp2);
    } 
	if(!flag)
	{
		printf("两个文件相同\n");
	}
	if(fclose(fp1))
	{
		printf("Can not close the file\n");
		exit(0);
	}
	if(fclose(fp2))
	{
		printf("Can not close the file\n");
		exit(0);
	}

}
int icmp(char *a,char *b)
{
 int i;
 for (i = 0; a[i]&&b[i]; i++)
    {
        if (a[i]!=b[i])
            {
                break;
            }
    }
  return i+1;
}
