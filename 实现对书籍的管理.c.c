#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <process.h>
struct bookinfo
{
	char name[20];
	char author[20];
	float price;
	int count;
	struct bookinfo *next;
};
typedef struct bookinfo book;
void printmanu();
book *loadnode();
void printnode(book *head);
book *addnode(book *head);
book *deletenode(book *head);
void *lookbook(book *head);
void updatanode(book *head);
void savenode(book *head);
void destory(book *head);
int main (void)
{
	int op;
	book *head;
	head=NULL;
	printmanu();
	scanf("%d",&op);
	while(op!=0)
	{
		switch(op)
		{
			case 1:
			       head=loadnode();
			       break;
			case 2:
			       printnode(head);
			       break;
			case 3:
			       head=addnode(head);
			       break;
			case 4:
			       head=deletenode(head);
			       break;
			case 5:
			       updatanode(head);
			       break;
			case 6:
			       lookbook(head);
			       break;
			case 7:
				   savenode(head);
				   break;
		}
		printmanu();
	    scanf("%d",&op);
	}
	if(op==0)
	{
		destory(head);
	}
}
void printmanu()
{
	printf("*****************************\n");
	printf("1:load     2:print    3:add    4:delete\n");
	printf("5:update   6:lookup   7:save   0:exit\n");
	printf("please input select:\n");
	printf("*****************************\n");
}
book *loadnode()
{
	FILE *fp;
	book *head,*temp,*tail;
	temp=head=tail=NULL;
	char name[20];
	char author[20];
	float price;
	int count;
	if((fp=fopen("c:\\book.txt","r"))==NULL)
	{
		printf("open error\n");
		exit(0);
	}
	while(!feof(fp))
	{
		fscanf(fp,"%s%s%f%d",name,author,&price,&count);
		temp=(book*)malloc(sizeof(book));
		temp->next=NULL;
		strcpy(temp->name,name);
		strcpy(temp->author,author);
		temp->price=price;
		temp->count=count;
		if(head==NULL)
		{
			head=tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	}
	if(fclose(fp))
	{
		printf("close error\n");
		exit(0);
	}
	printf("load success!\n");
	return head;
}
void printnode(book *head)
{
	book *temp;
	temp=head;
	if(head==NULL)
	{
		printf("No data\n");
		return;
	}
	printf("Name   author   price   count\n");
	while(temp!=NULL)
	{
		printf("%s   %s   %.2f   %d\n",temp->name,temp->author,temp->price,temp->count);
		temp=temp->next;
	}
}
book *addnode(book *head)
{
	book *temp,*p;
	p=head;
	temp=NULL;
	char name[20];
	char author[20];
	float price;
	int count;
	printf("input add bookname:\n");
	fflush(stdin);
	gets(name);
	printf("input add author:\n");
	fflush(stdin);
	gets(author);
	printf("input add price:\n");
	fflush(stdin);
	scanf("%f",&price);
	printf("input add count:\n");
	fflush(stdin);
	scanf("%d",&count);
	temp=(book*)malloc(sizeof(book));
	temp->next=NULL;
	strcpy(temp->name,name);
	strcpy(temp->author,author);
	temp->price=price;
	temp->count=count;
	while(p->next!=NULL)
	{
		p=p->next;
	}
    p->next=temp;
    printf("add success!\n");
	return head;
}
book *deletenode(book *head)
{
	char name[20];
	book *cur,*pre;
	int flag=0;
	pre=head;
	printf("delete bookname:\n");
	fflush(stdin);
	gets(name);
	if(pre==NULL)
	{
		printf("No data\n");
		return head;
	}
	cur=pre->next;
	if(strcmp(pre->name,name)==0)
	{
		head=cur;
		free(pre);
		flag=1;
		printf("delete success!\n");
		return head;
	}
	while(cur!=NULL)
	{
		if(strcmp(cur->name,name)==0)
		{
			pre->next=cur->next;
			free(cur);
			printf("delete success!\n");
			flag=1;
			return head;
		}
		pre=cur;
		cur=cur->next;
	}
	if(flag==0)
	{
		printf("No find\n");
	}
	return head;		
}
void *lookbook(book *head)
{
	char name[20];
	int flag=0;
	book *item;
	item=head;
	printf("Input look bookname:\n");
	fflush(stdin);
	gets(name);
	while(item!=NULL)
	{
		if(strcmp(item->name,name)==0)
		{
			flag=1;
			printf("find success!\n");
			printf("Name:%s   Author:%s   price:%.2f   count:%d\n",item->name,item->author,item->price,item->count);
		}
		item=item->next;
	}
	if(flag==0)
	{
		printf("No find\n");
	}
}
void updatanode(book *head)
{
	char name[20];
	book *item;
	item=head;
	int flag=0;
	printf("Input updata bookname:\n");
	fflush(stdin);
	gets(name);
	while(item!=NULL)
	{
		if(strcmp(item->name,name)==0)
		{
			flag=1;
			printf("Input new author:\n");
			fflush(stdin);
			gets(item->author);
			printf("Input new price:\n");
			fflush(stdin);
			scanf("%f",&item->price);
			printf("Input new count:\n");
			fflush(stdin);
			scanf("%d",&item->count);
			printf("updata success!\n");
		} 
		item=item->next;
	}
	if(flag==0)
	{
		printf("No find\n");
	}
}
void savenode(book *head)
{
	book *item;
	FILE *fp;
	item=head;
	if((fp=fopen("c:\\book.txt","w"))==NULL)
	{
		printf("open error\n");
		exit(0);
	}
	while(item->next!=NULL)
	{
		fprintf(fp,"%s   %s   %.2f   %d\n",item->name,item->author,item->price,item->count);
		item=item->next;
	}
	fprintf(fp,"%s   %s   %.2f   %d",item->name,item->author,item->price,item->count);
	if(fclose(fp))
	{
		printf("close error\n");
		exit(0);
	}
	printf("save success!\n");
}
void destory(book *head)
{
	book *item;
	int flag;
	printf("Input 1 or 0  1:save  0:not save\n");
	scanf("%d",&flag);
	if(flag==1)
	{
		savenode(head);
	}
	if(head==NULL)
	{
		return;
	}
	while(item!=NULL)
	{
		free(item);
		item=item->next;
	}
}
