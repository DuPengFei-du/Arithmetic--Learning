#define _CRT_SECURE_NO_WARNINGS 1


//冒泡排序
//但是冒泡排序的缺陷是只能排整形
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
void qsort(void* base,    //目标数组的起始位置
	       size_t num,    //数组元素的个数
	       size_t width,  //一个元素几个字节大小 
	       int(* compare)(const void* elem1, const void* elem2));
           //compare---函数比较  写函数的人想要实现的某种功能，程序员要写出如果比较才能的到他自己想要的结果
           //其实也就是再写不同类型的比较方法的


//利用快速排序
//对数组进行排序
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
//这个函数的的返回值为=0，>0,<0,三种可能的其中一种
{
	return *(int*)elem1 - *(int*)elem2;
	//其中有一的点需要注意：
	//就是，void*类型的变量是不可以直接进行解引用运算的
	//也不可以直接进行加法或者减法运算的，如果想要运算或者对其进行解引用的操作
	//必须进行强制类型转换，才可以
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
	return 0;
}


//利用快速排序对结构体进行排序
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


//模拟冒泡排序
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
			//传给cmp的是要交换的两个元素的地址
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//进行交换
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