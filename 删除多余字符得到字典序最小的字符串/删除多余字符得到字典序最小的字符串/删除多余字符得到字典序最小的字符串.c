/*

题目描述
给一个全是小写字母的字符串str，删除多余字符，使得每种字符只保留一个，并且让最终结果字符串字典序最小。
输入描述:
输入包含一行字符串，代表str(1≤length(str)≤10^5)

输出描述:

输出一行，代表删除后的字符串。

示例1

输入
acbc
输出
abc

示例2
输入
dbcacbca
输出
dabc

备注:
时间复杂度O（n）O（n），额外空间复杂度O（1）O（1）。
*/


/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100001];
	while(scanf("%s",str)!=EOF)
	{
		int map[256]={0};
		int len=strlen(str);
		for(int i=0;i<len;i++)
		{
			if(map[str[i]]==0)
				map[str[i]]=1;
		}
		map[str[0]]=0;
		for(int i=0;i<256;i++)
		{
			if(map[str[i]]==1)
				printf("%c",i);
		}
		return 0;
	}
}
*/