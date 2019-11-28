/*
题目描述
给定一个字符串chas[],
其中只含有字母字符和“*”字符，
现在想把所有“*”全部挪到chas的左边，字母字符移到chas的右边。完成调整函数。
输入描述:
输入一行字符串代表chas（1≤length(chas)≤10^5)

输出描述:

输出一行，代表返回的字符串。
示例1
输入
qw**23
输出
**qw23

示例2
输入
o*f*f*e*r
输出
****offer

备注:
时间复杂度O（n）O（n），额外空间复杂度O（1）.

*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,res="",t="";
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='*')
			res+=s[i];
		else
			t+=s[i];
	}
	cout<<res<<t<<endl;
	return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100001];
	while (scanf("%s", str) != EOF)
	{
		int len = strlen(str);
		int cnt = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			if (str[i] != '*')
			{
				str[len-1-cnt] = str[i];
				cnt++;
			}
		}
		memset(str, '*', len-cnt);
		printf("%s\n", str);
	}
	return 0;
}
*/