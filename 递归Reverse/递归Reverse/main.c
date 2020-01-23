#define _CRT_SECURE_NO_WARNINGS 1



//ÄæÐò×Ö·û´®
#include<stdio.h>
void my_reverse(char* str, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = str[left];
		str[left]= str[right];
		str[right] = temp;
		left++;
		right--;
	}
}
void Print(char arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
}
int main()
{
	char arr[] = "abcedf";
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_reverse(arr, sz);
	Print(arr, sz);
	return 0;
}


//ÓÃµÝ¹éÊµÏÖ×Ö·û´®µÄÄæÖÃ
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
void reverse_string(char arr[])
{
	int len = my_strlen(arr);
	char tmp = arr[0];//1
	arr[0] = arr[len - 1];//2
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string(1 + arr);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);//fedcba
	printf("%s\n", arr);
	return 0;
}