/*
����M��N��1 < M < N < 1000000��������[M,N]�ڵ����������ĸ������������壺����1���⣬ֻ�ܱ�1���Լ���������Ȼ����Ϊ����

��������:
��������M��N

�������:
�����������ĸ���

ʾ��1
����
2 10

���
4
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int m = 0, n = 0;
	int j = 0;
	int count = 0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
			count++;
	}
	printf("%d", count);
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)   //�ж�һ�����Ƿ�Ϊ����
{
	if (n <= 1)
	{
		return false;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}
int main()
{
	int M, N;
	cin >> M >> N;
	int cnt = 0;   //��¼�����������ĸ���
	for (int i = M; i <= N; i++)
	{
		if (isPrime(i))
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}