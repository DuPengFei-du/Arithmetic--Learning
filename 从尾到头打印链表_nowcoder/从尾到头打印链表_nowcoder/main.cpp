/*
����һ�������������β��ͷ��˳�򷵻�һ��ArrayList��
*/

//˼·1������ջ
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head)
	{
		//������ĿҪ�󣬸�����һ�������Ŀռ䣬�����Ҫ����ͬ����һ�������Ŀռ�
		stack<ListNode*> ret;
		vector<int> res;
		ListNode* p = head;
		// ������Ԫ��������ջ
		while (p != NULL)
		{
			ret.push(p);
			p = p->next;
		}
		// ջ�еĵ�����Ԫ�����γ�ջ
		while (!ret.empty())
		{
			p = ret.top();
			res.push_back(p->val);
			ret.pop();
		}
		return res;
	}
};


//˼·2������reverse  ����
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head)
	{
		vector<int> ret;
		ListNode* p = head;
		while (p != NULL)
		{
			ret.push_back(p->val);
			p = p->next;
		}
		reverse(ret.begin(), ret.end());
		return ret;
	}
};