/*21. �ϲ�������������
��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ� 

 

ʾ����

���룺1->2->4, 1->3->4
�����1->1->2->3->4->4*/
#include<stdio.h>
#include<stdlib.h>
Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (!l1)
		return l2;
	if (!l2)
		return l1;
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)), *t = head;
	while (l1 && l2){
		if (l1->val < l2->val){
			t->next = l1;
			l1 = l1->next;
		}			
		else{
			t->next = l2;
			l2 = l2->next;
		}			
		t = t->next;		
	}
	t->next = (l1 == NULL?l2:l1);
	return head->next;
}
int main()
{

}
