/*
给定一个非负整数数组 A，返回一个数组，在该数组中， A 的所有偶数元素之后跟着所有奇数元素。
你可以返回满足此条件的任何数组作为答案。

示例：

输入：[3,1,2,4]
输出：[2,4,3,1]
输出 [4,2,3,1]，[2,4,1,3] 和 [4,2,1,3] 也会被接受。

提示：
1 <= A.length <= 5000
0 <= A[i] <= 5000
*/


//解法1：
class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A)
	{
		int left = 0;
		int right = A.size() - 1;
		while (left < right)
		{
			int temp = 0;
			while ((left < right) && (A[left] % 2 == 0))
			{
				left++;
			}
			while ((left < right) && (A[right] % 2 == 1))
			{
				right--;
			}
			if (left < right)
			{
				temp = A[left];
				A[left] = A[right];
				A[right] = temp;
			}
			left++;
			right--;
		}
		return A;
	}
};


//解法2：
//方法 2：两边扫描
//第一遍输出偶数，第二遍输出奇数。
//java
class Solution {
	public int[] sortArrayByParity(int[] A) {
		int[] ans = new int[A.length];
		int t = 0;
		for (int i = 0; i < A.length; ++i)
			if (A[i] % 2 == 0)
				ans[t++] = A[i];
		for (int i = 0; i < A.length; ++i)
			if (A[i] % 2 == 1)
				ans[t++] = A[i];

		return ans;
	}
}