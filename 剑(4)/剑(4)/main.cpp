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
		stack<int> s;
		while (head)
		{
			s.push(head->val);
			head = head->next;
		}
		while (!s.empty())
		{
			ret.push_back(s.top());
			s.pop();
		}
		return ret;
	}
};


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
		stack<int> s;
		while (head)
		{
			s.push(head->val);
			head = head->next;
		}
		while (!s.empty())
		{
			ret.push_back(s.top());
			s.pop();
		}
		return ret;
	}
};


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
		while (head)
		{
			ret.push_back(head->val);
			head = head->next;
		}
		reverse(ret.begin(), ret.end());
		return ret;
	}
};
