/*
��Ŀ����

ͨ����������һ��Сд��ĸ(a~z)��ɵ��ַ�����
���дһ���ַ�����һ������ͳ���ַ�������ͬ�ַ����ֵĴ����������ֵ�������ַ�������ִ�����
�����ַ���"babcc"��һ����Ϊ"a1b2c2"

��������:
ÿ����������ÿ��Ϊһ���ַ�������'\n'��β������cccddecca

�������:
���ѹ������ַ���ac5d2e

ʾ��1

����
dabcab

���
a2b2c1d1
*/



/*
#include<bits/stdc++.h>
//�������е�ͷ�ļ�
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		//������
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