/*

��Ŀ����
��һ��ȫ��Сд��ĸ���ַ���str��ɾ�������ַ���ʹ��ÿ���ַ�ֻ����һ�������������ս���ַ����ֵ�����С��
��������:
�������һ���ַ���������str(1��length(str)��10^5)

�������:

���һ�У�����ɾ������ַ�����

ʾ��1

����
acbc
���
abc

ʾ��2
����
dbcacbca
���
dabc

��ע:
ʱ�临�Ӷ�O��n��O��n��������ռ临�Ӷ�O��1��O��1����
*/


/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100001];
	while(scanf("%s",str)!=EOF)
	{
		int map[256]={0};
		int len=strlen(str);
		for(int i=0;i<len;i++)
		{
			if(map[str[i]]==0)
				map[str[i]]=1;
		}
		map[str[0]]=0;
		for(int i=0;i<256;i++)
		{
			if(map[str[i]]==1)
				printf("%c",i);
		}
		return 0;
	}
}
*/