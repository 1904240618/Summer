#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
	int num;
	char name[10]; 
	int sco;
	struct stu *next;
} ;
int main (void)
{
	struct stu *head,*tail,*p,*q,*m;
	int num,sco;
	char name[10];
	head=tail=NULL;
	printf("input student information:\n");
	scanf("%d %s %d",&num,name,&sco);
	while(num!=0)
	{
		p=(struct stu*)malloc(sizeof(struct stu));
		p->next=NULL;
		p->num=num;
		p->sco=sco;
		strcpy(p->name,name);
		if(head==NULL)
		{
			head=p;
			tail=p;
		}
		else
		{
			if(p->num<head->num)
			{
				p->next=head;
				head=p;
			}
			else if(p->num>tail->num)
			{
				tail->next=p;
				tail=p;
			}
			else
			{
				q=head;
				while(q!=NULL)
				{
					if(p->num>q->num&&p->num<q->next->num)
					break;
					else
					q=q->next;
				}
				p->next=q->next;
				q->next=p;
			}
		}
		printf("input student information:\n");
	    scanf("%d %s %d",&num,name,&sco);
	}
	p=head;
	while (p!=NULL)
	{
		printf("num:%d  name:%s  sco:%d\n",p->num,p->name,p->sco);
		p=p->next; 
	}
	printf("Input delete num:\n");
	scanf("%d",&num);
	if(head==NULL)
	{
		printf("Error\n");
	}
	else
	{
		m=head;
		q=m->next;
		if(m->num==num)
		{
			head=tail=NULL;
			free(m);
		}
		else
		{
			while(q!=NULL)
			{
				if(q->num==num)
				break;
				else
				{
					m=q;
					q=q->next;
				}
			}
			if(q==NULL)
			{
				printf("Not found!\n");
			}
			else
			{
				m->next=q->next;
				free(q);
			}
		}
	}
	p=head;
	while (p!=NULL)
	{
		printf("num:%d  name:%s  sco:%d\n",p->num,p->name,p->sco);
		p=p->next; 
	}
	free(p);
	return 0;
}
