/*
����һ���ַ�����������ַ����������ַ�����

��������:
ÿ����������һ���ַ������ַ�����󳤶�Ϊ100����ֻ������ĸ��������Ϊ�մ������ִ�Сд��

�������:
ÿ������һ�У����ַ���ԭ�е��ַ�˳������ַ����ϣ����ظ����ֲ��������ĸ�������
ʾ��1
����
abcqweracb

���
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