//逆向打印单链表
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

typedef struct List
{
	Node* phead;
}List;


//思路1：
/*
我们可以给定一个标记，这个标记代表的是当然所要打印的结点的下一个结点
一开始让这个标记处在空的位置，每次打印完一个结点，让这儿结点向前移动一个单位就可以了
*/
//Node* cur = phead;
//Node* pTailNode = NULL;
//while (pTailNode != phead)
//{
//	while (cur->next != NULL)
//	{
//		cur = cur->next;
//	}
//	printf("%d", cur->data);
//	pTailNode = cur;
//}


//思路2：
/*
创建一段辅助空间，大小为链表中元素的个数那么长就可以了，依次插入，然后逆向打印
*/
//int count = 0;
//Node* cur = phead;
//while (cur)
//{
//	cur = cur->next;
//	count++;
//}
//return count;
//int* temp = (int*)malloc(sizeof(int) * count);
//if (NULL == temp)
//{
//	assert(0);
//	return;
//}
////开始搬移元素
//for (int i = 0; i < count; i++)
//{
//	pTemp[i] = cur;
//	cur = cur->next;
//}
////开始逆向打印
//for (int i = count - 1; i >= 0; --i)
//{
//	printf("%d", pTemp[i]);
//}
//free(pTemp);


//思路3：
/*
利用递归的特性
*/
//void PrintTail2Head(Node* phead)
//{
//	if (phead)
//	{
//		PrintTail2Head(phead->next);
//		printf("%d", phead->data);
//	}
//}