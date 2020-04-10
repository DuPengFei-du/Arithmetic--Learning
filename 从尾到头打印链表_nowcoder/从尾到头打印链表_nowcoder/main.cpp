/*
输入一个链表，按链表从尾到头的顺序返回一个ArrayList。
*/

//思路1：利用栈
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
		//根据题目要求，给的是一段连续的空间，最后需要返回同样的一段连续的空间
		stack<ListNode*> ret;
		vector<int> res;
		ListNode* p = head;
		// 单链表元素依次入栈
		while (p != NULL)
		{
			ret.push(p);
			p = p->next;
		}
		// 栈中的单链表元素依次出栈
		while (!ret.empty())
		{
			p = ret.top();
			res.push_back(p->val);
			ret.pop();
		}
		return res;
	}
};


//思路2：利用reverse  数组
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