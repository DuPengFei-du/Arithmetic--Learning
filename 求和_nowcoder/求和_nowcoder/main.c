/*
��Ŀ����
��1+2+3+...+n.
Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����
*/

//���õݹ�ķ���
class Solution {
public:
	int Sum_Solution(int n)
	{
		int ret = n;
		ret && (ret += Sum_Solution(n - 1));
		return ret;
	}
};