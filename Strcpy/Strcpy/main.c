#define _CRT_SECURE_NO_WARNINGS 1



//�ַ�����������
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



//�ַ�������
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
	while (*dest++ = *source++)    //\0Ҳһ�𶼸��ƹ�ȥ�ˣ����üӼӣ���ʹ���ټӼ�
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
	while (*dest++ = *source++)    //\0Ҳһ�𶼸��ƹ�ȥ�ˣ����üӼӣ���ʹ���ټӼ�
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
	while (*dest++ = *source++)    //\0Ҳһ�𶼸��ƹ�ȥ�ˣ����üӼӣ���ʹ���ټӼ�
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




//��������
#include<stdio.h>
#include<assert.h>
char *my_strcpy(char* dest, const char* source)  //����Ŀ���ַ�������ʼ��ַ
{
	char* ret = dest;
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest++ = *source++)    //\0Ҳһ�𶼸��ƹ�ȥ�ˣ����üӼӣ���ʹ���ټӼ�
	{
		;
	}
	return ret;  //�������д return dest�Ļ����ǲ��еģ���Ϊdest�Ѿ��仯�ˣ�������Ҫ�ڿ�ͷ��¼����dest����ʼ��ַ��
}
int main()
{
	char arr1[20] = "################";
	char arr2[] = "Hello World";
	my_strcpy(arr1, NULL);
	printf("%s", arr1);
	return 0;
}