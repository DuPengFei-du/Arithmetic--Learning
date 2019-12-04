/*
题目描述：

现给定n个整数，并定义一个非负整数m，且令f(m) = (m%a1)+(m%a2)+...+(m%an)。
此处的X % Y的结果为X除以Y的余数。
现请你找出一个m，求出f(m)的最大值。

输入描述:
输入包含两行，第一行为一正整数n，(1<n<=3000)
第二行为n个整数a1,a2,...,an ，其中(2<=ai<=10^5)

输出描述:
输出仅包含一行，输出f(m)的最大值

示例1
输入
3
3 4 6
输出
10

说明
就样例而言，当m取11时可取得最大值。
*/



/*
# 假设 m % x = x-1（x-1是能取到的最大余数，也就是说 m+1 是 x 的倍数）
# 如果 m+1 是所有数的倍数，则 f(m) 可以取到最大值，m+1 的值就是所有数的最小公倍数
# f(m) = (a1-1) + (a2-1) + ... + (an-1) = sum(a)-n
*/



/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int res=0;
	for(int i=0;i<n;i++)
	{
		cin>>res;
		sum=sum+res;
	}
	cout<<sum-n<<endl;
}
*/