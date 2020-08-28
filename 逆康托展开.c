#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define Max 100
 

int JieCheng(int num)
{
	int i=1;
 
	if(num <= i)
		return 1;
	else
		return (num*JieCheng(num-1));
}
 

void get(int num,char s[],int length)
{
	int j=0;
	for(j=0;j<length;j++)
	{
		if(j==num)
			printf("%c\t",s[j]);
		if(j>num)
		{
			s[j-1] = s[j];
		}
	}
}
 
int main()
{
	char val;		
	char s[Max];	
	int x;			
 
	int r[Max];		
	int p[Max];		
 
	int i=0,j=0,k=0;
 
	printf("请输入s的集合：");
	while(scanf("%c",&val))
	{
		if(val == '\n')
			break;
		else
		{
			s[i] = val;
			i++;
		}	
	}
	
	printf("请输入X的值：");
	scanf("%d",&x);
 
	
	for(j=i-1;j>=0;j--)
	{
		p[k] = x/(JieCheng(j));
		r[k] = x%(JieCheng(j));
		x = r[k];
		k++;
	}
	
	for(j=0;j<i;j++)
	{
		get(p[j],s,i);
	}
	printf("\n");
 
	return 0;
}
