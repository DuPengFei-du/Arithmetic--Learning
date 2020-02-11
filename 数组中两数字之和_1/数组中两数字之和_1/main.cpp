/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那两个整数
并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。
但是，你不能重复利用这个数组中同样的元素。

示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/

/*
我的思路是：利用双层遍历啊，如果两个数的值等于所给的target的值
那么直接返回他们俩个数组中元素的下标就可以了
如果不存在这样的两个数组
那么return {}就可以了
代码如下所示
*/
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < nums.size(); i++)
		{
			for (j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
					return { i,j };
			}
		}
		return {};
	}
};
//代码的时间复杂度为o(n^2)

//其他思路：
//最开始的疑惑点在于不知道如何返回两个对应的下标
//那么，通过下述代码可以发现两个知识点：
//1.在判断bool值a为真或为假时：使用if(!a)或if(a)(这里我之前是用的a == true但是这种做法在leetcode中不行)。
//2.vector初始化的一种方法：vector<int> a = { a,b,c,d }; 这里a, b, c, d指的是vector初值。
//c++中创建一个数组，可以利用vector的方法
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		//先将数组排序，这样比target大的就可以直接排除（错误！！因为整数可能为负数
		//双重循环
		int i, j;
		int second = 0;
		bool find = false;
		for (i = 0; i < nums.size() && !find; ++i) {//错误点1“find==true”
			second = target - nums[i];
			for (j = i + 1; j < nums.size(); ++j) {
				if (nums[j] == second) {
					find = true;
					break;
				}
			}
		}
		i--;
		//输出
		vector<int> ans = { i,j };   //需要重点了解的创建数组的方法
		return ans;
	}
};
