/*
给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。
注意你不能在买入股票前卖出股票。

示例 1:
输入: [7,1,5,3,6,4]
输出: 5
解释: 在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
	 注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格。

示例 2:
输入: [7,6,4,3,1]
输出: 0
解释: 在这种情况下, 没有交易完成, 所以最大利润为 0。
*/

//我的思路是：变量两遍，根据题目得要去只用能后面得大的减去前面的小的，所以通过遍历，找出数组中和铺后的值
//和前面的值相差的最大值，返回就可以了

//代码如下所示:
class Solution {
public:
	int maxProfit(vector<int>& prices)
	{
		int maxprofit = 0;
		int len = prices.size();
		for (int i = 0; i < len - 1; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				int profit = prices[j] - prices[i];
				if (profit > maxprofit)
				{
					maxprofit = profit;
				}
			}
		}
		return maxprofit;
	}
};