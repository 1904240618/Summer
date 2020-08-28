/*19. 删除链表的倒数第N个节点
给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。

示例：

给定一个链表: 1->2->3->4->5, 和 n = 2.

当删除了倒数第二个节点后，链表变为 1->2->3->5.*/

 Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode *p = head,*q = head;
    while(p)
    {
        if(n<0)
        {
            q = q->next;
        }
        n--;
        p = p->next;
    }
    if(n==0)
    {
        return head->next;
    }
    q->next = q->next->next;
    return head;

}
struct ListNode *readlist()
{
	struct ListNode *head,*tail,*p;
	int n;
	int size=sizeof(struct ListNode);
	scanf("%d",&n);
	head = tail = NULL;
	while(n != -1)
	{
		p=(struct ListNode *)malloc(size);
		p->val = n;
		if(head == NULL)
		{
			head = p;
		}
		else
		{
			tail->next = p;
		}
		tail = p;
		scanf("%d",&n);
	}
	tail->next = NULL;
	return head;

}
int main()
{
	struct ListNode*head;
	int n;
	scanf("%d",&n);
	readlist();
	removeNthFromEnd(head,n);

	return 0;
}