/*
给定两个排序后的数组 A 和 B，其中 A 的末端有足够的缓冲空间容纳 B。 编写一个方法，将 B 合并入 A 并排序。

初始化 A 和 B 的元素数量分别为 m 和 n。


示例:
输入:
A = [1,2,3,0,0,0], m = 3
B = [2,5,6],       n = 3
输出: [1,2,2,3,5,6]
*/


//大体思路是，先将连个数组合并，然后利用冒泡排序将合并的数组排序
//最终得到想要的结果
void merge(int* A, int ASize, int m, int* B, int BSize, int n)
{
	//可以有先合并，在排序的思路
	int pa = m;
	int pb = 0;
	for (int i = 0; i < n; i++)
	{
		A[pa] = B[pb];
		pa++;
		pb++;
	}
	for (int i = 0; i < ASize - 1; i++)
	{
		for (int j = 0; j < ASize - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}


//也可以利用快速排序的方法
//整体的思路也是一样的，就是先合并两个数组，然后利用快速排序对数组进行排序
//好的一点就是，快速排序的时间复杂度要优于冒泡排序的时间复杂度
int cmp(int* a, int* b) {
	return *a - *b;
}

void merge(int* A, int ASize, int m, int* B, int BSize, int n) {
	int i = n;
	while (i--) {
		A[m + i] = B[i];
	}
	qsort(A, (m + n), sizeof(int), cmp);
}


//也可以使用c++中的sort函数取进行排序
class Solution {
public:
	void merge(vector<int>& A, int m, vector<int>& B, int n) {
		for (int i = 0; i != n; ++i)
			A[m + i] = B[i];
		sort(A.begin(), A.end());
	}
};
