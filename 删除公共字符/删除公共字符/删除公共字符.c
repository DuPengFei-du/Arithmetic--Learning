/*

题目描述
输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
例如，输入”They are students.”和”aeiou”，
则删除之后的第一个字符串变成”Thy r stdnts.”

输入描述:
每个测试输入包含2个字符串
输出描述:
输出删除后的字符串

示例1
输入
They are students.
aeiou

输出
Thy r stdnts.
*/

/*
解题思路：
本题如果使用传统的暴力查找方式，如判断第一个字符串的字符是否在第二个串中，
再挪动字符删除这个字符的方式，效率为O(n^2),效率太低
1.将第二个字符串的字符都映射到一个hashtable数组中，用来判断一个字符在这个字符串
2.判断一个字符再第二个字符串，不要使用删除，这样效率太低，因为每次删除都伴随数据移。
这里可以考虑使用将不再字符添加到一个新字符串中，最后返回新的字符串
*/


/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	int hashtable[256] = { 0 };
	for (int i = 0; i < s2.size(); i++)
	{
		hashtable[s2[i]]++;
		//使用哈希映射思想，统计s2中字符出现的次数
	}
	//遍历s1，s1[i]映射hashtable对应位置为0，则表示这个字符存在
	//s2中没有出现过的，将它+=到ret，注意，这里最好不要使用S1.erase（i)
	//因为边遍历，边erase，容易出错
	string ret;
	for (int i = 0; i < s1.size(); i++)
	{
		if (hashtable[str[i]] == 0)
		{
			ret += s1[i];
		}
	}
	cout << ret << endl;
	return 0;
}
*/





/*
#include<iostream>
using namespace std;
int main()
{
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s2.size();i++)
	{
		int index=0;
		while((index=s1.find(s2[i]))!=-1)
			  s1.erase(index,1);
	}
	cout<<s1<<endl;
	return 0;
}
*/