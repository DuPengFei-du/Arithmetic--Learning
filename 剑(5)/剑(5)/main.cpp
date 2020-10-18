/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
*/
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		//避免删除的结点为头节点要传递二级指针的情况
		//我们给出一个伪头节点
		ListNode* pNewHead = new ListNode(0);
		pNewHead->next = pHead;
		ListNode* prev = pNewHead;
		ListNode* p = pHead;
		ListNode* next = nullptr;
		while (p != nullptr && p->next != nullptr)
		{
			next = p->next;
			if (p->val == next->val)
			{
				while (next != nullptr && next->val == p->val)
				{
					next = next->next;
				}
				prev->next = next;
				p = next;
			}
			else
			{
				prev = p;
				p = p->next;
			}
		}
		return pNewHead->next;
	}
};