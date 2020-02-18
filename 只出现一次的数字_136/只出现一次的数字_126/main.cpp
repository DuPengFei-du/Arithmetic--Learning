/*
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

说明：
你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

示例 1:
输入: [2,2,1]
输出: 1

示例 2:
输入: [4,1,2,1,2]
输出: 4
*/

//这个题可以利用为位运算的异或操作符
//任何一个数字异或它自己都等于0。
//也就是说，如果我们从头到尾依次异或数组中的每一个数字，那么最终的结果刚好是那个只出现一次的数字。
//因为那些出现两次的数字全部在异或中抵消掉了。(因为异或操作符，相同位0，相异为1)
//代码如下：
class Solution {
public:
	int singleNumber(vector<int>& nums)
	{
		//用异或的方法
		int size = nums.size();
		int ret = 0;
		for (int i = 0; i < size; i++)
		{
			ret ^= nums[i];
		}
		return ret;
	}
};


//或者也可以利用两次循环的暴力解法
//利用两次循环
//代码如下
//先排序，然后使用双指针
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (int i = 0, j = 1; j < nums.size(); i += 2, j += 2) {
			if (nums[i] != nums[j])  return nums[i];
		}
		return nums[nums.size() - 1];
	}
};


//还可以使用排序的方法
/*
我初步思路就是用的这种方法
就是首先对数组进行快速排序，然后从头开始遍历，因为如果是相同的两个数，肯定是挨着的
此时我会把他们全都置为-1，所以最后遍历一遍之后，不是-1的就是答案。 
但是这种方式要注意可能测试样例本身就有-1， 所以最后如果找不出答案，返回-1.
*/
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int len = nums.size();
		sort(nums.begin(), nums.end());
		for (int i = 0; i < len - 1; i++)
		{
			if (nums[i] != -1 && nums[i] == nums[i + 1])
			{
				nums[i] = -1;
				nums[i + 1] = -1;
			}
		}
		for (int i = 0; i < len; i++)
		{
			if (nums[i] != -1)
				return nums[i];
		}
		return -1;
	}
};