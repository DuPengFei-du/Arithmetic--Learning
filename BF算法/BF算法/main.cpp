#include<iostream>
using namespace std;
//返回子串t在主串t中第pos个字符之后的位置；若不存在，函数返回0
//t非空，1≤pos≤s.size()
int Index(string s, string t, int pos = 0)
{
	size_t i = pos;				//主串t当前下表
	size_t j = 0;				//子串t当前下表
	while (i < s.size() && j < t.size())	//i小于s长度，j小于t长度，循环继续
	{
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else				//指针退回，重新开始匹配
		{
			i = i - j + 1;
			j = 0;			//j退回到子串t的首位
		}
	}
	if (j >= t.size())
		return i - t.size() + 1;
	else
		return 0;
}

int main()
{
	string s = "goodgoogle";
	string t = "google";
	cout << Index(s, t) << endl;
	return 0;
}



#include <stdio.h>
#include <string.h>
int BF(const char* s, const char* sub, int pos)   //sub是子串
{
	int i = pos;
	int j = 0;
	int lens = strlen(s);
	int lensub = strlen(sub);
	while (i < lens && j < lensub)
	{
		if (s[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;//i退回到当前匹配失败初始的下一个
			j = 0;//j回退到0
		}
	}
	if (j >= lensub)
	{
		return i - j;
	}
	else
	{
		return -1;
	}
}

int main()
{
	const char* s = "ababcabcdfabcde";
	const char* sub = "abcd";
	printf("%d\n", BF(s, sub, 0));
	return 0;
}