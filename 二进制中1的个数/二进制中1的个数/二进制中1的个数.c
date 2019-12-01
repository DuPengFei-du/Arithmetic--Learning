/*
题目描述
把一个32-bit整型转成二进制，其中包含多少个1，比如5的二进制表达是101，其中包含2个1

输入描述:
输入为整型（十进制），只需兼容32-bit即可，如5、32
输出描述:
输出为字符串，如“2”、“1”

示例1
输入
5
输出
2

说明
5的二进制是101，其中包含2个1
*/


/*
#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	int n=0;
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if((n>>i)&1==1)
			count++;
	}
	printf("%d",count);
	return 0;
}
*/


/*
#include <stdio.h>
int main()
{
	int n,sum = 0;
	int i,j;
	scanf("%d",&n);
	while(n)
	{
		i = n % 2;
		sum = sum + i;
		n = n / 2;
	}
	printf("%d",sum);
	return 0;
}
*/