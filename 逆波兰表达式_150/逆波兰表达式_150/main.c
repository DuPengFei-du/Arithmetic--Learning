/*
根据逆波兰表示法，求表达式的值。

有效的运算符包括 +, -, *, / 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。

说明：

整数除法只保留整数部分。
给定逆波兰表达式总是有效的。换句话说，表达式总会得出有效数值且不存在除数为 0 的情况。

示例 1：
输入: ["2", "1", "+", "3", "*"]
输出: 9
解释: ((2 + 1) * 3) = 9

示例 2：
输入: ["4", "13", "5", "/", "+"]
输出: 6
解释: (4 + (13 / 5)) = 6

示例 3：
输入: ["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]
输出: 22
解释:
  ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
*/

typedef int SDataType;


typedef struct Stack
{
	SDataType* array;
	int _capacity;
	int _top;          //标记栈顶的位置
}Stack;

void StackInit(Stack* ps)
{
	//先看这个栈是否存在
	assert(ps);
	//然后去开辟空间
	ps->array = (int*)malloc(sizeof(int) * 3);
	//然后去判断是否申请空间成功
	if (NULL == ps->array)
	{
		assert(0);
		return;
	}
	ps->_capacity = 3;
	ps->_top = 0;   //相当于是顺序表中的size
}

void CheckCapacity(Stack* ps)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		//表明容量已经不够用了
		int newcapacity = 2 * ps->_capacity;
		SDataType* temp = (SDataType*)malloc(sizeof(SDataType) * newcapacity);
		if (NULL == temp)
		{
			assert(0);
			return;
		}
		memcpy(temp, ps->array, sizeof(SDataType) * ps->_top);
		free(ps->array);
		ps->array = temp;
		ps->_capacity = newcapacity;
	}
}

void StackPush(Stack* ps, SDataType data)
{
	//进来需要先判断一下栈是否存在
	assert(ps);
	CheckCapacity(ps);
	ps->array[ps->_top] = data;
	ps->_top++;
}

void StackPop(Stack* ps)
{
	assert(ps);
	if (0 == ps->_top)
		return;
	ps->_top--;   //就算是出栈了
}

SDataType StackTop(Stack* ps)
{
	//先检测是否存在
	assert(ps);
	return ps->array[ps->_top - 1];
}

int StackSize(Stack* ps)
{
	assert(ps);
	return  ps->_top;
}

int StackEmpty(Stack* ps)
{
	assert(ps);
	return 0 == ps->_top;
}

void StackDestroy(Stack* ps)
{
	assert(ps);
	if (ps->array)
	{
		free(ps->array);
		ps->array = NULL;
		ps->_capacity = 0;
		ps->_top = 0;
	}
}
int evalRPN(char** tokens, int tokensSize)
{
	//之所以是二级指针是因为，字符数组所存储的类型是char*类型的
	//所以首元素的地址是char**类型的
	Stack s;
	StackInit(&s);
	int ret = 0;
	for (int i = 0; i < tokensSize; i++)
	{
		char* str = tokens[i];
		if (!('+' == str[0] || '*' == str[0] || '-' == str[0] && '\0' == str[1] || '/' == str[0]))
		{
			//把字符串转换为数字，可以用到atoi
			StackPush(&s, atoi(str));
		}
		else
		{
			int right = StackTop(&s);
			StackPop(&s);
			int left = StackTop(&s);
			StackPop(&s);
			switch (str[0])
			{
			case'+':
				StackPush(&s, left + right);
				break;
			case'-':
				StackPush(&s, left - right);
				break;
			case'*':
				StackPush(&s, left * right);
				break;
			case'/':
				StackPush(&s, left / right);
				break;
			}
		}
	}
	ret = StackTop(&s);
	StackDestroy(&s);
	return ret;
}