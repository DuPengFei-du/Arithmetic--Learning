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
	ListNode* middleNode(ListNode* head)
	{
		ListNode* fast = head;
		ListNode* slow = head;
		while (fast && fast->next)
		{
			fast = fast->next->next;
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
	ListNode* middleNode(ListNode* head)
	{
		//先求出链表的结点个数
		ListNode* cur = head;
		int count = 0;
		while (cur)
		{
			count++;
			cur = cur->next;
		}
		cur = head;
		int k = 0;
		while (k < count / 2)
		{
			k++;
			cur = cur->next;
		}
		return cur;
	}
};