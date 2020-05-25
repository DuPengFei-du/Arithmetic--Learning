/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* partition(ListNode* head, int x)
	{
		//�ָ��������ȴ���������������ͷ�ڵ������
		ListNode* head1 = new ListNode(0);
		ListNode* head2 = new ListNode(0);
		ListNode* less = head1;
		ListNode* greater = head2;
		ListNode* p = head;
		while (p)
		{
			if (p->val < x)
			{
				less->next = p;
				less = less->next;
			}
			else
			{
				greater->next = p;
				greater = greater->next;
			}
			p = p->next;
		}
		if (head2)
		{
			less->next = head2->next;
		}
		greater->next = NULL;
		return head1->next;
	}
};