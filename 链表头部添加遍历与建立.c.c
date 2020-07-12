#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
	int num;
	char name[10];
	int sco;
	struct student *next;
};
int main (void)
{
	struct student *head,*tail,*p;
	int sco,num;
	char name[10];
	head=tail=NULL;
	printf("input student information:\n");
	scanf("%d %s %d",&num,name,&sco);
	while(num!=0)
	{
		p=(struct student*)malloc(sizeof(struct student));
		p->next=NULL;
		p->num=num;
		p->sco=sco;
		strcpy(p->name,name);
		if(tail==NULL)
		{
			head=p;
			tail=p;
		}
		else
		{
			p->next=head;
		}
		head=p;
		printf("input student information:\n");
	    scanf("%d %s %d",&num,name,&sco);
	}
	p=head;
	while(p!=NULL)
	{
		printf("num:%d  name:%s  sco:%d\n",p->num,p->name,p->sco);
		p=p->next;
	}
	free(p);
	return 0;
} 
