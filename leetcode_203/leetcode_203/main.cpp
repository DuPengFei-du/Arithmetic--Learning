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
	ListNode* removeElements(ListNode* head, int val)
	{
		//利用哨兵结点进行求解
		ListNode* first = new ListNode(0);
		first->next = head;
		ListNode* prev = first;
		while (prev->next)
		{
			if (prev->next->val == val)
			{
				ListNode* temp = prev->next;
				prev->next = prev->next->next;
				delete temp;
			}
			else
			{
				prev = prev->next;
			}
		}
		return first->next;
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
	ListNode* removeElements(ListNode* head, int val)
	{
		if (head == NULL)
			return head;
		head->next = removeElements(head->next, val);
		return head->val == val ? head->next : head;
	}
};