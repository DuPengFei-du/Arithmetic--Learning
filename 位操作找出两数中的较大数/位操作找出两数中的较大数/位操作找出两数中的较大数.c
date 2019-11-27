/*
题目描述
给定两个32位整数a和b，返回a和b中较大的，要求不能用任何比较判断运算符。

输入描述:
输出两个整数a和b，a和b均为32位整数。

输出描述:
输出一个整数，两个数中较大的那一个。
示例1
输入
1 0
输出
1

备注:
时间复杂度O(1)O(1),额外空间复杂度O(1)O(1)。
*/

/*
思路：
对于给定两个int型a,b，在不使用if-else等比较和判断运算符的情况下，如何返回较大的一个数呢？
通常我们比较两个数的大小，都是通过a-b的结果来判断a与b的大小
如果是正值，则a>b,如果是负值则a<b,如果为0，则相等
由于是int型，则在内存中占4个字节，32位，第一位是符号位
因此在没有比较运算符的情况下，我们可以通过移位来判断a-b的值的正负。
(a-b)>>31,
对于有符号数，在右移时，符号位将随同移动。
当为正数时， 最高位补0，而为负数时，符号位为1，
因此当
a>b时，(a-b)>>31=0000 0000 0000 0000 0000 0000 0000 0000
a<b时，(a-b)>>31 = 1111 1111 1111 1111 1111 1111 1111 1111
如果 a>b,返回a=a-0;
如果a<b，返回a = a-(a-b)
*/

/*
int getMax(int a, int b)
{
	b = a-b;
	a -= b&(b>>31);
	return a;
}
*/


/*
#include<stdio.h>
int MAX(int a,int b)
{
	b=a-b;
	a-=b&(b>>31);
	return a;
}
int main()
{
	int a=0;
	int b=0;
	int ret=0;
	scanf("%d %d",&a,&b);
	ret=MAX(a,b);
	printf("%d",ret);
}
*/