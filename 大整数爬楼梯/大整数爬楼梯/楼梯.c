/*
������ǰ��һ��n�׵�¥�ݣ���һ��ֻ����1�׻�2�ס�
���ʼ��������Բ��ö����ֲ�ͬ�ķ�ʽ�������¥�ݡ�
*/


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[103][30] = {0};
	num[1][29] = 1;//��һ��
	num[2][29] = 2;//�ڶ���
	for (int i = 3; i <= n; i++)
	{
		for (int j = 29; j >= 0; j--)//ѭ�����������Ǵ�1��ʼ�����Ǵ�0��ʼ
		{
			if ((num[i - 1][j] + num[i - 2][j]+num[i][j]) >= 10)//��λ��ռ��һ��Ԫ��
				num[i][j - 1] += 1;
			num[i][j] = (num[i - 1][j] + num[i - 2][j] + num[i][j]) % 10;
		}
	}
	int j = 0;
	while (num[n][j] == 0)
		j++;
	for (int i = j; i < 30; i++)
		cout << num[n][i];
	return 0;
}
*/