/*206. 反转链表
反转一个单链表。

示例:

输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL*/

  Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
 };

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode*cur = head,*res = NULL;
    while(cur)
    {
        head = head->next;
        cur->next = res;
        res = cur;
        cur = head;
    }
    return res;
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
	struct ListNode *L;
	L = readlist();
	reverseList(L);
	return 0;
}
