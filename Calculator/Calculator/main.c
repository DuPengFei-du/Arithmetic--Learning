#define _CRT_SECURE_WARNINGS 1



//计算器的实现
//普通版本的计算器实现
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** 欢迎来到计算器 ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入:>\n");
			(void)scanf("%d %d", &x, &y);
			int ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入:>\n");
			(void)scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


//利用函数指针数组优化计算器
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** 欢迎来到计算器 ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void test()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	int (*parray[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:>");
		(void)scanf("%d", &input);
		printf("情输入两个操作数:>\n");
		(void)scanf("%d %d", &x, &y);
		ret = parray[input](x, y);
		printf("%d\n", ret);
	} while (input);
}
int main()
{
	test();
	return 0;
}


//利用函数指针减少冗余
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("*** 欢迎来到计算器 ***\n");
	printf("***  1.Add   2.Sub ***\n");
	printf("***  3.Mul   4.Div ***\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("ret = %d\n", ret);
}
void test()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}