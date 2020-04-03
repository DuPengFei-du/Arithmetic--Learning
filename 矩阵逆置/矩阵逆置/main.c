/*
KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。

输入描述:
第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。

输出描述:
输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
*/


#include<stdio.h>
int main()
{
	int n, m, i, j;
	int a[10][10];
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


#include <stdio.h>
int main() {
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			scanf("%d ", &a[i][j]);
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[j][i]);
		printf("\n");
	}
	return 0;
}
