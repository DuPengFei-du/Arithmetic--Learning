/*

��Ŀ����
���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
���磬���롱They are students.���͡�aeiou����
��ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��

��������:
ÿ�������������2���ַ���
�������:
���ɾ������ַ���

ʾ��1
����
They are students.
aeiou

���
Thy r stdnts.
*/

/*
����˼·��
�������ʹ�ô�ͳ�ı������ҷ�ʽ�����жϵ�һ���ַ������ַ��Ƿ��ڵڶ������У�
��Ų���ַ�ɾ������ַ��ķ�ʽ��Ч��ΪO(n^2),Ч��̫��
1.���ڶ����ַ������ַ���ӳ�䵽һ��hashtable�����У������ж�һ���ַ�������ַ���
2.�ж�һ���ַ��ٵڶ����ַ�������Ҫʹ��ɾ��������Ч��̫�ͣ���Ϊÿ��ɾ�������������ơ�
������Կ���ʹ�ý������ַ���ӵ�һ�����ַ����У���󷵻��µ��ַ���
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
		//ʹ�ù�ϣӳ��˼�룬ͳ��s2���ַ����ֵĴ���
	}
	//����s1��s1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ�����
	//s2��û�г��ֹ��ģ�����+=��ret��ע�⣬������ò�Ҫʹ��S1.erase��i)
	//��Ϊ�߱�������erase�����׳���
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