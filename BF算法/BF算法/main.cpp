#include<iostream>
using namespace std;
//�����Ӵ�t������t�е�pos���ַ�֮���λ�ã��������ڣ���������0
//t�ǿգ�1��pos��s.size()
int Index(string s, string t, int pos = 0)
{
	size_t i = pos;				//����t��ǰ�±�
	size_t j = 0;				//�Ӵ�t��ǰ�±�
	while (i < s.size() && j < t.size())	//iС��s���ȣ�jС��t���ȣ�ѭ������
	{
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else				//ָ���˻أ����¿�ʼƥ��
		{
			i = i - j + 1;
			j = 0;			//j�˻ص��Ӵ�t����λ
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
int BF(const char* s, const char* sub, int pos)   //sub���Ӵ�
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
			i = i - j + 1;//i�˻ص���ǰƥ��ʧ�ܳ�ʼ����һ��
			j = 0;//j���˵�0
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