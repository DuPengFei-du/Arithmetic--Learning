#define _CRT_SECURE_NO_WARNINGS 1


/*
有一个字符数组的内容为student a am i
请你将数组的内容改为i am a student
要求:
不能使用库函数
只能开辟有限个空间(空间个数和字符串的长度无关)
意思是长度可能是固定的，要求其实是空间复杂度的问题。
*/
//先逆序整个字符串
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
	//逆序整个串
	reverse_str(arr, arr + len - 1);
	//逆序每个单词
	while (*end != '\0')
	{
		char* start = end;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_str(start, end - 1);//单词
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