/*
��Ŀ����
��һ��32-bit����ת�ɶ����ƣ����а������ٸ�1������5�Ķ����Ʊ����101�����а���2��1

��������:
����Ϊ���ͣ�ʮ���ƣ���ֻ�����32-bit���ɣ���5��32
�������:
���Ϊ�ַ������硰2������1��

ʾ��1
����
5
���
2

˵��
5�Ķ�������101�����а���2��1
*/


/*
#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	int n=0;
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if((n>>i)&1==1)
			count++;
	}
	printf("%d",count);
	return 0;
}
*/


/*
#include <stdio.h>
int main()
{
	int n,sum = 0;
	int i,j;
	scanf("%d",&n);
	while(n)
	{
		i = n % 2;
		sum = sum + i;
		n = n / 2;
	}
	printf("%d",sum);
	return 0;
}
*/