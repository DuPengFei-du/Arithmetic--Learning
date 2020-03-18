/*
����һ�����������ҳ��������ȡ�

�����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����

˵��: Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root)
{
	int leftHeight = 0;
	int rightHeight = 0;
	if (NULL == root)
		return 0;
	leftHeight = maxDepth(root->left);
	rightHeight = maxDepth(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;

}