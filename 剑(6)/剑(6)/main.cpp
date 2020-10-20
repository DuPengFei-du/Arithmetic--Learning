/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead)
	{
		ListNode* cur = pHead;
		ListNode* prev = nullptr;
		ListNode* next = nullptr;
		while (cur)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		return prev;
	}
};



/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead)
	{
		ListNode* pNewHead = new ListNode(0);
		ListNode* cur = pHead;
		while (cur)
		{
			pHead = cur->next;
			cur->next = pNewHead;
			pNewHead = cur;
			cur = pHead;
		}
		return pNewHead;
	};
};