/*
给定一个二叉树，找出其最大深度。

二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

说明: 叶子节点是指没有子节点的节点。
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