/*
����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��

����������
1->2->2->1
���أ�true
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
			return true;  //ֻ��һ���ڵ�Ļ�����ô�϶��ǻ��Ľṹ��
		ListNode* pFast = A;
		ListNode* pSlow = A;
		ListNode* pPreSlow = NULL;
		while (pFast && pFast->next)
		{
			pFast = pFast->next->next;
			pPreSlow = pSlow;
			pSlow = pSlow->next;   //slowͣ��λ�þ����м����λ��
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