/*
��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n���0��ʼ����0��Ϊ0����
n<=39
*/

//�ⷨ1��
//�������£�
class Solution {
public:
	int Fibonacci(int n)
	{
		if (n == 0)
			return 0;
		else if (n <= 2)
			return 1;
		else
			return  Fibonacci(n - 1) + Fibonacci(n - 2);
	}
};


//�ⷨ2��
//�������£�
class Solution {
public:
	int Fibonacci(int n)
	{
		int a = 0;
		int b = 1;
		int c = 0;
		if (n == 0)
			return 0;
		else if (n == 1)
			return 1;
		for (int i = 2; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return b;
	}
};