#define _CRT_SECURE_NO_WARNINGS 1


/*
һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
�����������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
*/

/*class Solution {
public:
	int jumpFloor(int number)
	{
		//������ʵ����쳲��������е�����
		if (number < 2)
			return 1;
		else
			return jumpFloor(number - 1) + jumpFloor(number - 2);
	}
};
*/


/*
һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
�����������һ��n����̨���ܹ��ж�����������
*/
/*
class Solution {
public:
	int jumpFloorII(int number)
	{
		//����쳲��������еı��Σ�ͨ���ҹ��ɣ��õ����ձ�ı��ʽ
		if(number<2)
			return 1;
		else
			return 2*jumpFloorII(number-1);
	}
};
*/


/*
��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n(n<=39)���0��ʼ����0��Ϊ0����
*/
/*
class Solution {
public:
	int Fibonacci(int n)
	{
		int a=0;
		int b=1;
		int res=0;
		if(n==0)
			return 0;
		if(n==1)
			return 1;
		for(int i=2;i<=n;i++)
		{
			res=a+b;
			a=b;
			b=res;
		}
		return res;
	}
};


class Solution {
public:
	int Fibonacci(int n)
	{
		//��ĿҪ�����쳲��������еĵ�n��
		if(n==0)
			return 0;
		if(n<=2)
			return 1;
		else
			return Fibonacci(n-1)+Fibonacci(n-2);
	}
};
*/


/*
�Ʋ�����������ָ���������У����еĵ�һ���͵ڶ�������Ϊ1��������ÿ����������ǰ��2����֮�͡�
����һ��������K��Ҫ��Ʋ����������е�k�����Ƕ��١�
*/
/*
#include<stdio.h>
int main()
{
	int a=1;
	int b=1;
	int c=1;
	int n=0;
	scanf("%d",&n);
	while(n>=3)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	printf("%d",c);
	return 0;
}
*/


/*
��һ¥�ݹ�m�����տ�ʼʱ���ڵ�һ������ÿ��ֻ�ܿ���һ�����߶�����Ҫ����m�������ж����߷���
ע���涨��һ����һ����0���߷���
����һ��������int n���뷵��һ������������¥�ķ�ʽ������֤nС�ڵ���100��
Ϊ�˷�ֹ������뷵�ؽ��Mod 1000000007��ֵ��
*/
/*
class GoUpstairs {
public:
	int countWays(int n)
	{
		// write code here
		int a=1;
		int b=1;
		if(n==2)
			return 1;
		for(int i=3;i<=n;i++)
		{
			int res=(a+b)%1000000007;
			a=b;
			b=res;
		}
		return b;
	}
};
*/