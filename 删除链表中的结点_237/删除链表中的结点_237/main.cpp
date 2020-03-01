/*
请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
现有一个链表 -- head = [4,5,1,9]，它可以表示为:


示例 1:
输入: head = [4,5,1,9], node = 5
输出: [4,1,9]
解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9.

示例 2:
输入: head = [4,5,1,9], node = 1
输出: [4,5,9]
解释: 给定你链表中值为 1 的第三个节点，那么在调用了你的函数之后，该链表应变为 4 -> 5 -> 9.
*/


//代码如下所示：


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
	void deleteNode(ListNode* node) {
		ListNode* del = node->next;
		node->val = node->next->val;
		node->next = node->next->next;
		delete del;
	}
};


//原因是因为：
/*
本题的题意是,存在一个我们不能直接去访问链表head,以及给定的节点node
我们要在无法访问head的情况下,把node节点删除

在面向对象的语言中,我们已知node但无法访问node的上一个节点,因此不能修改上一个节点的next属性
官方题解把node节点的值用下一个节点的值去覆盖掉,然后把重复值的node.next给删除掉,达成了一种"狸猫换太子"的效果

首先要删除当前节点不能直接delete掉，那样链表就断成两段。
所以我们把这个节点的值修改为它下一个节点的值，然后删除下一个节点。
由于题目说明这个节点不会是末尾节点，所以它一定有下一个节点，这样就可以达到删除该节点的效果。
*/