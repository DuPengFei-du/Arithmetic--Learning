/*
��Ŀ����
һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������
*/


//����������ʾ��
class Solution {
public:
	int jumpFloorII(int number)
	{
		if (number == 1)
			return 1;
		else if (number == 2)
			return 2;
		else
			return 2 * jumpFloorII(number - 1);
	}
};