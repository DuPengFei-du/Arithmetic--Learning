/*
��Ŀ����
��һ�仰�ĵ��ʽ��е��ã���㲻���á�
���� 
I like beijing. 
�����������Ϊ��
beijing. like I

��������:
ÿ�������������1������������ I like beijing. �����������Ȳ�����100

�������:
�����������֮����ַ���,�Կո�ָ�

ʾ��1
����
I like beijing.

���
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
�ڶ���˼·�Ƚϼ򵥣�ֱ������cin>>s��������
�����ո�ͽ����ˣ���Ȼ�ָ��ÿ������
��ν�ÿ�ν��յ��ĵ���ƴ�ӵ�֮ǰ�Ĵ�ǰ������ù����ˡ�
*/
/*
#include <iostream>
#include <string>
using namespace std;
// cin��ȡstringʱ�Զ��ᱻ�ո�ָ���������һ���ַ����洢�����������
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