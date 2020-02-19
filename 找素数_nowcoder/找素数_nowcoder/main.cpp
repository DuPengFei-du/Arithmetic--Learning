/*
输入M、N，1 < M < N < 1000000，求区间[M,N]内的所有素数的个数。素数定义：除了1以外，只能被1和自己整除的自然数称为素数

输入描述:
两个整数M，N

输出描述:
区间内素数的个数

示例1
输入
2 10

输出
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

bool isPrime(int n)   //判断一个数是否为素数
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
	int cnt = 0;   //记录区间内素数的个数
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