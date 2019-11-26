/*
题目描述

通过键盘输入一串小写字母(a~z)组成的字符串。
请编写一个字符串归一化程序，统计字符串中相同字符出现的次数，并按字典序输出字符及其出现次数。
例如字符串"babcc"归一化后为"a1b2c2"

输入描述:
每个测试用例每行为一个字符串，以'\n'结尾，例如cccddecca

输出描述:
输出压缩后的字符串ac5d2e

示例1

输入
dabcab

输出
a2b2c1d1
*/



/*
#include<bits/stdc++.h>
//包含所有的头文件
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		//先排序
		int count=1;
		sort(str.begin(),str.end());
		cout<<str[0];
		for(int i=1;i<str.size();i++)
		{
			if(str[i]==str[i-1])
				count++;
			else
			{
				cout<<count;
				cout<<str[i];
				count=1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
*/