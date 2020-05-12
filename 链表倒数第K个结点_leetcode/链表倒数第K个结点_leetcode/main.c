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
	ListNode* getKthFromEnd(ListNode* head, int k)
	{
		if (head == NULL || k < 0)
			return NULL;
		ListNode* fast = head;
		ListNode* slow = head;
		while (k--)
		{
			if (NULL == fast)
				return NULL;
			fast = fast->next;
		}
		while (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};



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
	int pos = 0;
	ListNode* getKthFromEnd(ListNode* head, int k)
	{
		if (head == NULL || k < 0)
		{
			return NULL;
		}
		ListNode* ret = getKthFromEnd(head->next, k);
		pos++;
		if (pos == k)
		{
			return head;
		}
		return ret;
	}
};