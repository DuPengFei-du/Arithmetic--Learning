/*
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

示例 1:
输入: "()"
输出: true

示例 2:
输入: "()[]{}"
输出: true

示例 3:
输入: "(]"
输出: false

示例 4:
输入: "([)]"
输出: false

示例 5:
输入: "{[]}"
输出: true
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
bool isValid(char* s)
{
	//取字符，检测该字符是否为左括号
	//如果是的话，那么入栈
	//如果不是的话，那么继续往后左
	//用右括号与栈顶元素进行比较
	//匹配的话，出栈
	//如果不匹配的话，退出
	//最后还需要检测栈是否为空
	//因为是C语言，所以没有栈，可以把自己写的栈放过来使用
	int len = 0;
	int i = 0;
	Stack st;
	bool ret = false;
	if (NULL == s)
		return false;
	StackInit(&st);
	len = strlen(s);
	for (; i < len; i++)
	{
		if ('(' == s[i] || '[' == s[i] || '{' == s[i])
		{
			StackPush(&st, s[i]);
		}
		else
		{
			//当前字符为右括号
			//然后我可以取检测他们是不是一对
			char ch;
			if (StackEmpty(&st))
			{
				break;
			}
			ch = StackTop(&st);
			if ('(' == ch && ')' == s[i] ||
				'{' == ch && '}' == s[i] ||
				'[' == ch && ']' == s[i])
			{
				StackPop(&st);
			}
			else
				break;
		}
	}
	//如果栈不为空。说明，左括号比右括号多
	if (i == len && StackEmpty(&st))
		ret = true;
	StackDestroy(&st);
	return ret;
}