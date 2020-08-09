#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct num
{
	int num;
	struct num *next;
};
struct num* creat();
struct num* print(struct num* l);
struct num* del(struct num* l);
int main (void)
{
	struct num* l;
	l=NULL;
	l=creat();
	print(l);
	l=del(l);
	printf("\n");
	print(l);
	return 0;
}
struct num* creat()
{
	struct num *l,*p;
	int num;
	p=l=NULL;
	printf("Input number:\n");
	scanf("%d",&num);
	while(num!=-1)
	{
		p=(struct num*)malloc(sizeof(struct num));
		p->next=NULL;
		p->num=num;
		if(l==NULL)
		{
			l=p;
		}
		else
		{
			p->next=l;
			l=p;
		}
		printf("Input number:\n");
	    scanf("%d",&num);
	}
	return l;
}
struct num* print(struct num* l)
{
	struct num *p;
	p=l;
	while(p!=NULL)
	{
		printf("num=%d\n",p->num);
		p=p->next;
	}
	free(p);
}
struct num* del(struct num* l)
{
	struct num *ptr1,*ptr2;
    while(l!=NULL&&l->num%2==0)
    {
        ptr1=l;
        ptr2=l->next;
        free(ptr2);
    }
    if(l==NULL)
    return NULL;
    ptr1=l;
    ptr2=l->next;
    while(ptr2!=NULL)
    {
        if(ptr2->num%2==0)
        {
            ptr1->next=ptr2->next;
            free(ptr2);
        }
        else
        ptr1=ptr2;
        ptr2=ptr1->next;
    }
    return l;
}

