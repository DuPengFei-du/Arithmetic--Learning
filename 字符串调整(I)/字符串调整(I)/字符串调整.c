/*
��Ŀ����
����һ���ַ���chas[],
����ֻ������ĸ�ַ��͡�*���ַ���
����������С�*��ȫ��Ų��chas����ߣ���ĸ�ַ��Ƶ�chas���ұߡ���ɵ���������
��������:
����һ���ַ�������chas��1��length(chas)��10^5)

�������:

���һ�У������ص��ַ�����
ʾ��1
����
qw**23
���
**qw23

ʾ��2
����
o*f*f*e*r
���
****offer

��ע:
ʱ�临�Ӷ�O��n��O��n��������ռ临�Ӷ�O��1��.

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