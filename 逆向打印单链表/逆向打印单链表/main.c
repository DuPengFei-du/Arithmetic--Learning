//�����ӡ������
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


//˼·1��
/*
���ǿ��Ը���һ����ǣ������Ǵ�����ǵ�Ȼ��Ҫ��ӡ�Ľ�����һ�����
һ��ʼ�������Ǵ��ڿյ�λ�ã�ÿ�δ�ӡ��һ����㣬����������ǰ�ƶ�һ����λ�Ϳ�����
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


//˼·2��
/*
����һ�θ����ռ䣬��СΪ������Ԫ�صĸ�����ô���Ϳ����ˣ����β��룬Ȼ�������ӡ
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
////��ʼ����Ԫ��
//for (int i = 0; i < count; i++)
//{
//	pTemp[i] = cur;
//	cur = cur->next;
//}
////��ʼ�����ӡ
//for (int i = count - 1; i >= 0; --i)
//{
//	printf("%d", pTemp[i]);
//}
//free(pTemp);


//˼·3��
/*
���õݹ������
*/
//void PrintTail2Head(Node* phead)
//{
//	if (phead)
//	{
//		PrintTail2Head(phead->next);
//		printf("%d", phead->data);
//	}
//}