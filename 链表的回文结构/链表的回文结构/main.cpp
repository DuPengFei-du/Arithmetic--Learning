/*
对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。
给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。

测试样例：
1->2->2->1
返回：true
*/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
	ListNode* ReverseList(ListNode* pHead)
	{
		ListNode* pNewHead = NULL;
		ListNode* pCur = pHead;
		while (pCur)
		{
			pHead = pCur->next;
			pCur->next = pNewHead;
			pNewHead = pCur;
			pCur = pHead;
		}
		return pNewHead;
	}
	bool chkPalindrome(ListNode* A)
	{
		if (NULL == A || NULL == A->next)
			return true;  //只有一个节点的话，那么肯定是回文结构了
		ListNode* pFast = A;
		ListNode* pSlow = A;
		ListNode* pPreSlow = NULL;
		while (pFast && pFast->next)
		{
			pFast = pFast->next->next;
			pPreSlow = pSlow;
			pSlow = pSlow->next;   //slow停的位置就是中间结点的位置
		}
		pPreSlow->next = NULL;
		ListNode* pHead2 = ReverseList(pSlow);
		ListNode* p1 = A;
		ListNode* p2 = pHead2;
		bool Ret = false;
		while (p1)
		{
			if (p1->val != p2->val)
				break;
			p1 = p1->next;
			p2 = p2->next;
		}
		if (NULL == p1)
			Ret = true;
		pPreSlow->next = ReverseList(pHead2);
		return Ret;
	}
};