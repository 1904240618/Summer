#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
void printManu ();
book *load ();
book *addNode (book *head,book *p);
void browseNode (book *head);
book *addBook (book *head);
void lookUp(book *head);
book *delbook(book *head);
void updatebook(book *head);
void save (book *head);
void destroy(book *head);
void main (void)
{
	int op;
	book *head;
	head=NULL;
	printManu ();
	scanf("%d",&op);
	while(op!=0)
	{
		switch(op)
		{
			case 1:
				   head=load();
				   break;
			case 2:
				   browseNode(head);
				   break;
			case 3:
				   addBook (head);
				   break;
			case 4:
				   lookUp(head);
				   break;
			case 5:
				   head=delbook(head);
				   break;
			case 6:
				   updatebook(head);
				   break;	
			case 7:
				   save (head);
				   break;	   
		}
		printManu ();
		scanf("%d",&op);
	}
	if(op==0)
	{
		destroy(head);
	}
}
void printManu ()
{
	printf("*****************************\n");
	printf("please select operation\n");
	printf("   1:load   2:browse   3:add   4:Lookup\n");
	printf("   5:del    6:update   7:save  0:exit\n");
	printf("*****************************\n");
}
book *load ()
{
	FILE *fp;
	book *head,*temp;
	char name[20];
	char author[20];
	float price;
	int count;
	head=temp=NULL;
	if((fp=fopen("c:\\book.txt","r"))==NULL)
	{
		printf("open error!\n");
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
		head=addNode (head,temp);
	}
	if(fclose(fp))
	{
		printf("close error\n");
		exit(0); 
	}
	printf("load success\n");
	return head;
}
book *addNode (book *head,book *p)
{
	book *temp;
	temp=head;
	if(temp==NULL)
	{
		head=p;
		return head;
	}
	else
	{
		while(temp->next!=NULL)
	       {
		      temp=temp->next; 
	       }
	     temp->next=p;
	}
	return head;
}
void browseNode (book *head)
{
	book *temp;
	temp=head;
	if(head==NULL)
	{
		printf("No date\n");
		return;
	}
	printf("name    author    price    count\n");
	while(temp!=NULL)
	{
		printf("%s   %s   %.2f   %d\n",temp->name,temp->author,temp->price,temp->count);
		temp=temp->next;
	}
}
book *addBook (book *head)
{
	char name[20],author[20];
	float price;
	int count;
	book *temp;
	temp=NULL;
	printf("Enter add book name:\n");
	fflush(stdin);
	gets(name);
	printf("Enter add book author:\n");
	gets(author);
	printf("Enter add book price:\n"); 
	scanf("%f",&price);
	printf("Enter add book count:\n"); 
	scanf("%d",&count);
	temp=(book*)malloc(sizeof(book));
	temp->next=NULL;
	strcpy(temp->name,name); 
	strcpy(temp->author,author);
	temp->price=price;
	temp->count=count;
	head=addNode (head,temp);
	printf("add success\n");
	return head;
}
void save (book *head)
{
	FILE *fp;
	book *temp;
	temp=NULL;
	if((fp=fopen("c:\\book.txt","w"))==NULL)
	{
		printf("open error!\n");
		exit(0);
	}
	temp=head;
	while(temp->next!=NULL)
	{
		fprintf(fp,"%s  %s  %.2f  %d\n",temp->name,temp->author,temp->price,temp->count);
		temp=temp->next;
	}
	fprintf(fp,"%s  %s  %.2f  %d",temp->name,temp->author,temp->price,temp->count);
	if(fclose(fp))
	{
		printf("close error\n");
		exit(0); 
	}
	printf("save success!\n");
}
void lookUp(book *head)
{
	book *temp;
	int flag=0;
	char name[20];
	temp=head;
	printf("Enter lookup bookname:\n");
	fflush(stdin);
	gets(name);
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0)
		{
			printf("find book\n");
			printf("Name:%s   Author:%s   Price:%.2f   count:%d\n",temp->name,temp->author,temp->price,temp->count);
			flag=1;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		printf("Not found\n");
	}
}
book *delbook(book *head)
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
		printf("delete sucess!\n");
		return head;
	}
	while(cur!=NULL)
	{
		if(strcmp(cur->name,name)==0)
		{
			pre->next=cur->next; 
			free(cur);
			flag=1;
			printf("delete sucess!\n");
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
void updatebook(book *head)
{
	char name[20];
	book *temp;
	int flag=0;
	temp=head;
	printf("Enter book name:\n");
	fflush(stdin);
	gets(name); 
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name)==0)
		{
			printf("book's new information:\n");
			printf("Enter new author:\n");
			fflush(stdin);
			gets(temp->author);
			printf("Enter new price:\n");
			fflush(stdin);
			scanf("%f",&temp->price);
			printf("Enter new count:\n");
			fflush(stdin);
			scanf("%d",&temp->count);
			printf("update success!\n");
			flag=1;
			break;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		printf("No find");
	} 
}
void destroy(book *head)
{
	book *temp,*p;
	int flag;
	printf("save or not:1 save  0: not save\n");
	fflush(stdin);
	scanf("%d",&flag);
	if(flag==1)
	{
		save(head);
	} 
	if(head==NULL)
	{
		return;
	}
	p=head;
	temp=p->next;
	while(temp!=NULL)
	{
		free(p);
		p=temp;
		temp=p->next;
	}
	free(temp);
}
