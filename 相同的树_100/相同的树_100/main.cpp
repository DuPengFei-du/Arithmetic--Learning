/*
给定两个二叉树，编写一个函数来检验它们是否相同。
如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	//可以先考虑特殊情况
	//如果两颗树都是空的，那么两棵树肯定是相同的
	if (NULL == q && NULL == p)
		return true;
	//一棵树为空，那肯定不相同
	if (p == NULL || q == NULL)
		return false;
	return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

}