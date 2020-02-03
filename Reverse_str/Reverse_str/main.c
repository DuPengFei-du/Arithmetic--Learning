#define _CRT_SECURE_NO_WARNINGS 1


/*
��һ���ַ����������Ϊstudent a am i
���㽫��������ݸ�Ϊi am a student
Ҫ��:
����ʹ�ÿ⺯��
ֻ�ܿ������޸��ռ�(�ռ�������ַ����ĳ����޹�)
��˼�ǳ��ȿ����ǹ̶��ģ�Ҫ����ʵ�ǿռ临�Ӷȵ����⡣
*/
//�����������ַ���
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str++)
	{
		count++;
	}
	return count;
}
void reverse_str(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "student a am i";
	int len = my_strlen(arr);
	char* end = arr;
	reverse_str(arr, arr + len - 1);
	while (*end != '\0')
	{
		char* start = end;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_str(start, end - 1);
		if (*end != '\0')
			end++;
	}
	printf("%s\n", arr);
	return 0;
}


#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str++)
	{
		++count;
	}
	return count;
}

void reverse_str(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverse(char* arr, int len)
{
	char* end = arr;
	//����������
	reverse_str(arr, arr + len - 1);
	//����ÿ������
	while (*end != '\0')
	{
		char* start = end;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_str(start, end - 1);//����
		if (*end != '\0')
			end++;
	}
}
int main()
{
	char arr[] = "student a am i";
	int len = my_strlen(arr);
	reverse(arr, len);
	printf("%s\n", arr);
}