/*
������������������дһ�����������������Ƿ���ͬ��
����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�
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
	//�����ȿ����������
	//������������ǿյģ���ô�������϶�����ͬ��
	if (NULL == q && NULL == p)
		return true;
	//һ����Ϊ�գ��ǿ϶�����ͬ
	if (p == NULL || q == NULL)
		return false;
	return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

}