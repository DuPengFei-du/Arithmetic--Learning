#define _CRT_SECURE_NO_WARNINGS 1


//ð������
//����ð�������ȱ����ֻ��������
#include<stdio.h>
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - i; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1]= temp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//qsort
void qsort(void* base,    //Ŀ���������ʼλ��
	       size_t num,    //����Ԫ�صĸ���
	       size_t width,  //һ��Ԫ�ؼ����ֽڴ�С 
	       int(* compare)(const void* elem1, const void* elem2));
           //compare---�����Ƚ�  д����������Ҫʵ�ֵ�ĳ�ֹ��ܣ�����ԱҪд������Ƚϲ��ܵĵ����Լ���Ҫ�Ľ��
           //��ʵҲ������д��ͬ���͵ıȽϷ�����


//���ÿ�������
//�������������
#include<stdio.h>
#include<stdlib.h>
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void* elem1, const void* elem2)
//��������ĵķ���ֵΪ=0��>0,<0,���ֿ��ܵ�����һ��
{
	return *(int*)elem1 - *(int*)elem2;
	//������һ�ĵ���Ҫע�⣺
	//���ǣ�void*���͵ı����ǲ�����ֱ�ӽ��н����������
	//Ҳ������ֱ�ӽ��мӷ����߼�������ģ������Ҫ������߶�����н����õĲ���
	//�������ǿ������ת�����ſ���
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
	return 0;
}


//���ÿ�������Խṹ���������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_struct_by_name(const void* elem1, const void* elem2)
{
	return strcmp(((struct Stu*)elem1)->name,((struct Stu*)elem2)->name);
}
int main()
{
	struct Stu arr[3]= { {"zhangsan",20},{"lisi",15},{"wangwu",25}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_struct_by_name);
}


//ģ��ð������
#include<stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void my_BubbleSort(void* base, int sz, int width, int (*cmp)(const void* elem1, const void* elem2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����cmp����Ҫ����������Ԫ�صĵ�ַ
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//���н���
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}
void test()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
}
int main()
{
	test();
	return 0;
}