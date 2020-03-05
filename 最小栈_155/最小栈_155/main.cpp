/*
设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。

push(x) -- 将元素 x 推入栈中。
pop() -- 删除栈顶的元素。
top() -- 获取栈顶元素。
getMin() -- 检索栈中的最小元素。
示例:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> 返回 -3.
minStack.pop();
minStack.top();      --> 返回 0.
minStack.getMin();   --> 返回 -2.
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


typedef struct
{
	Stack _dataStack;
	Stack _minStack;
} MinStack;
/** initialize your data structure here. */
MinStack* minStackCreate()
{
	//通过动态开辟来初始化这个栈
	MinStack* pMs = (MinStack*)malloc(sizeof(MinStack));
	if (NULL == pMs)
	{
		assert(0);
		return NULL;
	}
	//初始化栈
	StackInit(&pMs->_dataStack);
	StackInit(&pMs->_minStack);
	return pMs;
}

void minStackPush(MinStack* obj, int x)
{
	//先压数据
	StackPush(&obj->_dataStack, x);
	//然后更新最小值
	if (StackEmpty(&obj->_minStack) || x <= StackTop(&obj->_minStack))
	{
		StackPush(&obj->_minStack, x);
	}
}

void minStackPop(MinStack* obj)
{
	//先检测数据栈栈顶元素是否与最小栈栈顶元素相等
	//如果相等，两个同时出栈
	if (StackTop(&obj->_dataStack) == StackTop(&obj->_minStack))
		StackPop(&obj->_minStack);
	StackPop(&obj->_dataStack);
}

int minStackTop(MinStack* obj)
{
	return StackTop(&obj->_dataStack);
}

int minStackGetMin(MinStack* obj)
{
	return StackTop(&obj->_minStack);
}

void minStackFree(MinStack* obj)
{
	StackDestroy(&obj->_dataStack);
	StackDestroy(&obj->_minStack);
	free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);

 * minStackPop(obj);

 * int param_3 = minStackTop(obj);

 * int param_4 = minStackGetMin(obj);

 * minStackFree(obj);
*/