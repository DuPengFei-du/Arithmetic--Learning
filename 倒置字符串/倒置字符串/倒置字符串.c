/*
题目描述
将一句话的单词进行倒置，标点不倒置。
比如 
I like beijing. 
经过函数后变为：
beijing. like I

输入描述:
每个测试输入包含1个测试用例： I like beijing. 输入用例长度不超过100

输出描述:
依次输出倒置之后的字符串,以空格分割

示例1
输入
I like beijing.

输出
beijing. like I

*/


/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	reverse(s.begin(),s.end());
	auto start =s.begin();
	while(start!=s.end())
	{
		auto end=start;
		while(end!=s.end()&&*end!=' ')
		{
			end++;
		}
		reverse(start,end);
		if(end!=s.end())
			start=end+1;
		else
			start=end;
	}
	cout<<s<<endl;
	return 0;
}
*/




/*
第二种思路比较简单，直接利用cin>>s接收输入
遇到空格就结束了，自然分割开了每个单词
其次将每次接收到的单词拼接到之前的串前面就逆置过来了。
*/
/*
#include <iostream>
#include <string>
using namespace std;
// cin读取string时自动会被空格分隔开，用另一个字符串存储进行逆序输出
int main()
{
	string s1, s2;
	cin >> s2;
	while (cin >> s1)
		s2 = s1  + " " + s2;
	cout << s2 << endl;
	return 0;
}
*/