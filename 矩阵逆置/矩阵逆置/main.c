/*
KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������

��������:
��һ�а�����������n��m����ʾһ���������n��m�У��ÿո�ָ��� (1��n��10,1��m��10)
��2��n+1�У�ÿ������m����������Χ-231~231-1�����ÿո�ָ���������n*m��������ʾ��һ�������е�Ԫ�ء�

�������:
���m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�
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
