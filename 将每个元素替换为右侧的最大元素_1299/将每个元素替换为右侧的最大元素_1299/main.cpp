/*
给你一个数组 arr ，请你将每个元素用它右边最大的元素替换，如果是最后一个元素，用 -1 替换。
完成所有替换操作后，请你返回这个数组。

示例：
输入：arr = [17,18,5,4,6,1]
输出：[18,6,6,6,1,-1]
 
提示：
1 <= arr.length <= 10^4
1 <= arr[i] <= 10^5
*/


//第一种方法:暴力法——直接遍历
class Solution {
public:
	vector<int> replaceElements(vector<int>& arr)
	{
		int len = arr.size();
		for (int i = 0; i < len; i++)
		{
			int max = -1;
			for (int j = i + 1; j < len; j++)
			{
				if (max < arr[j])
				{
					max = arr[j];
				}
			}
			arr[i] = max;
		}
		arr[len - 1] = -1;
		return arr;
	}
};


/*
逆序遍历
本题等价于对于数组 arr 中的每个元素 arr[i]，将其替换成 arr[i + 1], arr[i + 2], ..., arr[n - 1] 中的最大值。
因此我们可以逆序地遍历整个数组，同时维护从数组右端到当前位置所有元素的最大值。
设 ans[i] = max(arr[i + 1], arr[i + 2], ..., arr[n - 1])，那么在进行逆序遍历时，我们可以直接通过
ans[i] = max(ans[i + 1], arr[i + 1])
*/

class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {
		int n = arr.size();
		vector<int> ans(n);
		ans[n - 1] = -1;
		for (int i = n - 2; i >= 0; --i) {
			ans[i] = max(ans[i + 1], arr[i + 1]);
		}
		return ans;
	}
};