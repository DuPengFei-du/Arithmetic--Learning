/*
在你面前有一个n阶的楼梯，你一步只能上1阶或2阶。
请问计算出你可以采用多少种不同的方式爬完这个楼梯。
*/


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[103][30] = {0};
	num[1][29] = 1;//第一项
	num[2][29] = 2;//第二项
	for (int i = 3; i <= n; i++)
	{
		for (int j = 29; j >= 0; j--)//循环，数组行是从1开始，列是从0开始
		{
			if ((num[i - 1][j] + num[i - 2][j]+num[i][j]) >= 10)//进位，占多一个元素
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