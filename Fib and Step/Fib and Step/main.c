#define _CRT_SECURE_NO_WARNINGS 1


/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级。
求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
*/

/*class Solution {
public:
	int jumpFloor(int number)
	{
		//本质其实就是斐波那契数列的问题
		if (number < 2)
			return 1;
		else
			return jumpFloor(number - 1) + jumpFloor(number - 2);
	}
};
*/


/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/
/*
class Solution {
public:
	int jumpFloorII(int number)
	{
		//考察斐波那契数列的变形，通过找规律，得到了普遍的表达式
		if(number<2)
			return 1;
		else
			return 2*jumpFloorII(number-1);
	}
};
*/


/*
大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n(n<=39)项（从0开始，第0项为0）。
*/
/*
class Solution {
public:
	int Fibonacci(int n)
	{
		int a=0;
		int b=1;
		int res=0;
		if(n==0)
			return 0;
		if(n==1)
			return 1;
		for(int i=2;i<=n;i++)
		{
			res=a+b;
			a=b;
			b=res;
		}
		return res;
	}
};


class Solution {
public:
	int Fibonacci(int n)
	{
		//题目要求：输出斐波那契数列的第n项
		if(n==0)
			return 0;
		if(n<=2)
			return 1;
		else
			return Fibonacci(n-1)+Fibonacci(n-2);
	}
};
*/


/*
菲波那契数列是指这样的数列：数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。
给出一个正整数K，要求菲波那契数列中第k个数是多少。
*/
/*
#include<stdio.h>
int main()
{
	int a=1;
	int b=1;
	int c=1;
	int n=0;
	scanf("%d",&n);
	while(n>=3)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	printf("%d",c);
	return 0;
}
*/


/*
有一楼梯共m级，刚开始时你在第一级，若每次只能跨上一级或者二级，要走上m级，共有多少走法？
注：规定从一级到一级有0种走法。
给定一个正整数int n，请返回一个数，代表上楼的方式数。保证n小于等于100。
为了防止溢出，请返回结果Mod 1000000007的值。
*/
/*
class GoUpstairs {
public:
	int countWays(int n)
	{
		// write code here
		int a=1;
		int b=1;
		if(n==2)
			return 1;
		for(int i=3;i<=n;i++)
		{
			int res=(a+b)%1000000007;
			a=b;
			b=res;
		}
		return b;
	}
};
*/