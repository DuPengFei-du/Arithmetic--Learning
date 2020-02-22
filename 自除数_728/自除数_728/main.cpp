/*
自除数 是指可以被它包含的每一位数除尽的数。
例如，128 是一个自除数，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。
还有，自除数不允许包含 0 。
给定上边界和下边界数字，输出一个列表，列表的元素是边界（含边界）内所有的自除数

示例 1：
输入：
上边界left = 1, 下边界right = 22
输出： [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]

注意：
每个输入参数的边界满足 1 <= left <= right <= 10000。

*/

//解题思路：可以像之前的一个题一样，先得到所输入数字的每一位，然后进行判断，代码如下所示
class Solution {
public:
	//思路可以和之前的一个题类似，我先的到所输入数字的每一位，然后判断能否整除就可以了
	bool IsNum(int num)
	{
		int k = num;
		while (k != 0)
		{
			int temp = k % 10;
			k = k / 10;
			if (temp == 0 || num % temp != 0)
				return false;
		}
		return true;
	}
	vector<int> selfDividingNumbers(int left, int right)
	{
		vector<int> ret;
		for (int i = left; i <= right; i++)
		{
			if (IsNum(i))
			{
				ret.push_back(i);
			}
		}
		return ret;
	}
};