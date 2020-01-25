#define _CRT_SECURE_NO_WARNINGS 1



//字符串拷贝函数
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = "Hello World";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}



//字符串拷贝
#include<stdio.h>
void my_strcpy(char* dest, char* source)
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}



#include<stdio.h>
void my_strcpy(char* dest, const char* source)
{
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
void my_strcpy(char* dest, char* source)
{
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, NULL);
	printf("%s", arr1);
	return 0;
}


#include<stdio.h>
#include<assert.h>
char *my_strcpy(char* dest, const char* source)
{
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, NULL);
	printf("%s", arr1);
	return 0;
}




//完美代码
#include<stdio.h>
#include<assert.h>
char *my_strcpy(char* dest, const char* source)  //返回目标字符串的起始地址
{
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0也一起都复制过去了，后置加加，先使用再加加
	{
		;
	}
	return ret;  //如果这里写 return dest的话，是不行的，因为dest已经变化了，所以需要在开头记录下来dest的起始地址。
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, NULL);
	printf("%s", arr1);
	return 0;
}