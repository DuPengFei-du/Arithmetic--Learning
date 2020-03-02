/*
将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

示例：
输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	Node* head = NULL;  //结果链表的头节点
	Node* p1 = l1;
	Node* p2 = l2;
	Node* pTailNode = NULL;
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;
	if (p1->val <= p2->val)
	{
		head = p1;
		pTailNode = p1;
		p1 = p1->next;
	}
	else
	{
		head = p2;
		pTailNode = p2;
		p2 = p2->next;
	}
	while (p1 && p2)
	{
		if (p1->val < p2->val)
		{
			//将p1结点尾插到新链表
			pTailNode->next = p1;
			p1 = p1->next;
		}
		else
		{
			//将p2结点尾插到新链表
			pTailNode->next = p2;
			p2 = p2->next;
		}
		pTailNode = pTailNode->next;
	}
	if (p1)
		pTailNode->next = p1;
	if (p2)
		pTailNode->next = p2;
	return head;
}