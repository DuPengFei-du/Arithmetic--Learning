/*
输入一个字符串，求出该字符串包含的字符集合

输入描述:
每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。

输出描述:
每组数据一行，按字符串原有的字符顺序，输出字符集合，即重复出现并靠后的字母不输出。
示例1
输入
abcqweracb

输出
abcqwer
*/


/*
#include<iostream>
using namespace std;
int main()
{
	char str[101];
	while(cin>>str)
	{
		int A[256]={0};
		for(int i=0;str[i]!='\0';i++)
		{
			A[str[i]]++;
			if(A[str[i]]==1)
				printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}
*/


/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Hash(string& s, const string& str)
{
	string::const_iterator it = str.begin();
	while (it != str.end())
	{
		s[*it - 'A'] = 'y';
		++it;
	}
	it = str.begin();
	while (it != str.end())
	{
		if (s[*it - 'A'] == 'y')
		{
			printf("%c", *it);
			s[*it - 'A'] = 'n';
		}
		++it;
	}
	printf("\n");
}

int main()
{
	string str;
	str.reserve(100);
	string s(58,'n');
	while(cin >> str )
	//cin >> str;

	Hash(s, str);

	return 0;
}
*/