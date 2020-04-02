/*
KiKi现在得到一个包含n*m个数的整数序列，现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出，请你帮他完成这个任务。

输入描述:
一行，输入两个整数n和m，用空格分隔，第二行包含n*m个整数（范围-231~231-1）。(1≤n≤10, 1≤m≤10)

输出描述:
输出规划后n行m列的矩阵，每个数的后面有一个空格。
*/


#include<stdio.h>
int main() 
{
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m][n];
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}