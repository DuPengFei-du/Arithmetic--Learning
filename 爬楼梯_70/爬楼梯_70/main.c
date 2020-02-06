/*
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
注意：给定 n 是一个正整数。

示例 1：

输入： 2
输出： 2
解释： 有两种方法可以爬到楼顶。
1.  1 阶 + 1 阶
2.  2 阶
示例 2：

输入： 3
输出： 3
解释： 有三种方法可以爬到楼顶。
1.  1 阶 + 1 阶 + 1 阶
2.  1 阶 + 2 阶
3.  2 阶 + 1 阶
*/


//解法1：
/*
不难发现，这个问题可以被分解为一些包含最优子结构的子问题
即它的最优解可以从其子问题的最优解来有效地构建，我们可以使用动态规划来解决这一问题。
第 i阶只能从下面两种途径到达：
在第 (i-1)(i−1) 阶后向上爬 1 阶到达，也就是从第 (i-1)阶到第 i 阶的路径只有 1种。
在第 (i-2)(i−2) 阶后向上爬 2 阶，也就是从第 (i-2)阶到第 i 阶的路径只有 1 种。
令 dp[i]dp[i] 表示能到达第 ii 阶的方法总数：dp[i]=dp[i−1]*1+dp[i−2]*1
以5阶为例，
已知 dp[1] = 1, dp[2] = 2==> dp[3]=dp[1]+dp[2]=1+2=3==> dp[4]=dp[3]+dp[2]=3+2=5==> dp[5]=dp[4]+dp[3]=5+3=8
*/
int climbStairs(int n) {
	int* dp = new int[n + 2];
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
} 


//解法2：
/*
在上述方法中，我们使用 dp数组
其中 dp[i] = dp[i - 1] + dp[i - 2]dp[i] = dp[i−1] + dp[i−2]。
可以很容易通过分析得出 dp[i]dp[i] 其实就是第 i个斐波那契数 :
Fib(n) = Fib(n - 1) + Fib(n - 2)Fib(n) = Fib(n−1) + Fib(n−2)。 
其实就是对前面的dp数组进行优化，因为我们只需要dp[n]的数据。
*/
class Solution {
public:
	int climbStairs(int n) {
		int first = 1;
		int second = 1;
		for (int i = 2; i <= n; i++)
		{
			int thrid = first + second;
			first = second;
			second = thrid;
		}
		return second;
	}
};


