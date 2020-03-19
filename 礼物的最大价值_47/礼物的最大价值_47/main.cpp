/*
��һ�� m*n �����̵�ÿһ�񶼷���һ�����ÿ�����ﶼ��һ���ļ�ֵ����ֵ���� 0����
����Դ����̵����Ͻǿ�ʼ�ø�����������ÿ�����һ��������ƶ�һ��ֱ���������̵����½ǡ�
����һ�����̼������������ļ�ֵ���������������õ����ټ�ֵ�����

ʾ�� 1:
����:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]

���: 12
����: ·�� 1��3��5��2��1 �����õ�����ֵ������
*/


class Solution {
public:
	int maxValue(vector<vector<int>>& grid) {
		int rows = grid.size();
		if (rows == 0) return 0;
		int cols = grid[0].size();
		if (cols == 0) return 0;
		int dp[rows + 1][cols + 1];
		//��ʼ��
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= rows; i++)
			for (int j = 1; j <= cols; j++)
				dp[i][j] = max(dp[i][j - 1] + grid[i - 1][j - 1], dp[i - 1][j] + grid[i - 1][j - 1]);
		return dp[rows][cols];
	}
};