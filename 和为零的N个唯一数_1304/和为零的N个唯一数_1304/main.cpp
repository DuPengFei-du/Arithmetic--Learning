/*
给你一个整数 n
请你返回 任意 一个由 n 个 各不相同 的整数组成的数组
并且这 n 个数相加和为 0 。

示例 1：
输入：n = 5
输出：[-7,-1,1,3,4]
解释：这些数组也是正确的 [-5,-1,1,2,3]，[-3,-1,2,-2,4]。

示例 2：
输入：n = 3
输出：[-1,0,1]

示例 3：
输入：n = 1
输出：[0]
 
提示：
1 <= n <= 1000
*/

//思路：
/*
方法一：构造
我们首先将最小的 n - 1 个自然数 0, 1, 2, ..., n - 2 放入数组中
它们的和为 sum。
对于剩下的 1 个数，我们可以令其为 -sum，此时这 n 个数的和为 0，
并且：
当 n = 1 时，我们构造的答案中只有唯一的 1 个数 0；
当 n > 1 时，我们构造的答案中包含 n - 1 个互不相同的自然数和 1 个负数；
因此这 n 个数互不相同，即我们得到了一个满足要求的数组。
*/
class Solution {
public:
	vector<int> sumZero(int n) {
		vector<int> ans;
		int sum = 0;
		for (int i = 0; i < n - 1; ++i) {
			ans.push_back(i);
			sum += i;
		}
		ans.push_back(-sum);
		return ans;
	}
};


//长度是一半
class Solution {
public:
	vector<int> sumZero(int n) {
		vector<int> res;
		for (int i = 1; i <= n / 2; i++) {
			res.push_back(i);
			res.push_back(-i);
		}
		if (n % 2 == 1)res.push_back(0);
		//代表数组长度如果是奇数的话，那么还需要压进去一个0，才可以平衡
		return res;
	}
};
