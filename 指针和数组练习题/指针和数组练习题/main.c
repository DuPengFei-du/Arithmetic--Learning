#define _CRT_SECURE_NO_WARNINGS 1



//ָ���������������
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16,a��Ϊ������������������sizeof�ڲ�����ʾ������������Ĵ�С�����Ϊ4*4=16
	printf("%d\n", sizeof(a+0)); //4����ʱa��û�е���������sizeof�ڲ�������a��ʱ��ʾ������Ԫ�صĵ�ַ
	//a��ʾ��Ԫ�صĵ�ַ��a+0����ʾ������Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ������4���ֽ�
	printf("%d\n", sizeof(*a)); //4��*a��ʾ����Ԫ�ص�ֵ����Ԫ�ص�ֵΪ1������Ϊint��sizeof(int)=4
	printf("%d\n", sizeof(a+1));//4 a��ʾ��Ԫ�صĵ�ַ��a+1��ʾ���ǵڶ���Ԫ�صĵ�ַ��ֻҪ�ǵ�ַ
	//�������4
	printf("%d\n", sizeof(a[1]));//4 a[1]��ʾ���ǵ�2��Ԫ�ص�ֵ��ֵΪint���ͣ����Դ���СΪ4
	printf("%d\n", sizeof(&a));  //4 &a��ȡ��������������ĵ�ַ��ֻҪ�ǵ�ַ���������4���ֽ�
	printf("%d\n", sizeof(*&a)); // 16 �����Ҫע�⣺
	//�ȶ�a����&��ȥ������������ĵ�ַ���ڶ������ַ���н����õĲ���
	//���ҵ����������飬���Դ�СΪ15��*&a���൱��a����ʵ����sizeof(a)��Ϊ��������Ĵ�С
	printf("%d\n", sizeof(&a + 1)); //4 &a+1����������������Ĵ�С��Ȼ�󣬻���һ����ַ�����Խ������4
	printf("%d\n", sizeof(&a[0])); //4 ��Ȼ��һ����ַ
	printf("%d\n", sizeof(&a[0]+1)); //4 ���ǵ�ַ
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr)); //arr��Ϊ����������sizeof�ڲ���Ҫ���������������Ĵ�С
	//�����д�ʱ��û�з���\0������һ����6��Ԫ�أ�ÿ��Ԫ�صĴ�С��һ���ֽ�
	//������������Ĵ�СΪ6���ֽ�
	printf("%d\n", sizeof(arr + 0));  //4 ��ʱarr��Ϊ��Ԫ�صĵ�ַ��arr+0���Ǳ�ʾ��Ԫ�صĵ�ַ
	//ֻҪ�ǵ�ַ����С����4
	printf("%d\n", sizeof(*arr));     //1  arr��Ϊ��Ԫ�صĵ�ַ�����н����ã�Ȼ��õ���
	//��Ԫ�ص�ֵ��ֵΪchar�͵ģ���СΪ1���ֽ�
	printf("%d\n", sizeof(arr[1]));   //1 �ڶ���Ԫ�ص�ֵ
	printf("%d\n", sizeof(&arr));     //4  &arrȡ����������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4  �����������飬����һ����ַ
	printf("%d\n", sizeof(&arr[0] + 1));  //4
}


#include<stdio.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));   //δ֪������Ϊ�Ҳ�û�п���\0�����Բ�֪��\0��������
	//����ֵ�����ֵ X
	printf("%d\n", strlen(arr + 0));  //arr��ʱ��Ϊ��Ԫ�صĵ�ַ����Ԫ�ص�ַ+0������Ԫ�صĵ�ַ
	//���Ի������ֵX
	printf("%d\n", strlen(*arr));    //����ȥ�����ַ�a��Сдa��ASCII��ֵΪ97
	//����Ϊ�������
	printf("%d\n", strlen(arr[1]));  //������B�����Ի��Ǵ������
	printf("%d\n", strlen(&arr));    //X
	printf("%d\n", strlen(&arr + 1));  //Y-X=6
	printf("%d\n", strlen(&arr[0] + 1));  //X+1
}


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); //7 ��������һ��\0������Ϊ7
	printf("%d\n", sizeof(arr + 0));  //4 ��Ԫ�ص�ַ�����Ի��ǵ�ַ
	printf("%d\n", sizeof(*arr));  //1 ��Ԫ�ص�ֵ����char�͵ģ���СΪ1
	printf("%d\n", sizeof(arr[1])); //1 
	printf("%d\n", sizeof(&arr)); // 4 ȡ����������ĵ�ַ
	printf("%d\n", sizeof(&arr + 1)); //4 ������������
	printf("%d\n", sizeof(&arr[0] + 1)); //4 
}


#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));   //6
	printf("%d\n", strlen(arr + 0));  //�������һ��һ����������һ����6��
	printf("%d\n", strlen(*arr));     //error ������Ĵ��η�ʽ
	printf("%d\n", strlen(arr[1]));   //error ������Ĵ��η�ʽ
	printf("%d\n", strlen(&arr));     //ȡ����������ĵ�ַ��������������6
	printf("%d\n", strlen(&arr + 1)); //���ֵ�������������飬�Ѿ�����\0�ĺ�����
	//���Խ���Ƕ�����һ��δ֪��
	printf("%d\n", strlen(&arr[0] + 1));  //5
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));  //4 pΪָ���������СΪ4
	printf("%d\n", sizeof(p + 1)); //4 p��ָ�������+1�Ĵ�С���ǵ�ַ�����Ϊ3
	printf("%d\n", sizeof(*p));//1 ����һ��ֵ��ֵ��������char���ͣ����Դ�СΪ1
	printf("%d\n", sizeof(p[0])); //1 ͬ��
	printf("%d\n", sizeof(&p));   // 4 ȡ����������ĵ�ַ 
	printf("%d\n", sizeof(&p + 1));   //4  �����������飬���ǵ�ַ
	printf("%d\n", sizeof(&p[0] + 1));  //4�����ǵ�ַ
}


#include<stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));   //6 pΪa�ĵ�ַ����a�����м�������
	printf("%d\n", strlen(p + 1));  //5
	printf("%d\n", strlen(*p));  //error
	printf("%d\n", strlen(p[0]));  //error
	printf("%d\n", strlen(&p));    //δ֪�� &p��p�д������û��ʲôֱ�ӵĹ�ϵ
	printf("%d\n", strlen(&p + 1)); //δ֪��
	printf("%d\n", strlen(&p[0] + 1)); //5 ȡ����b�ĵ�ַ�����Ϊ5 
}


//��ά����
#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));  //48 �������飬��СΪ 48
	printf("%d\n", sizeof(a[0][0]));  //4 ��һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0]));     //16 ��һ�е������������������ڲ���
	//��ʾ��һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1));  //4 a[0]�����Ԫ�صĵ�ַ�����Դ�С����4
	printf("%d\n", sizeof(*(a[0] + 1)));  //4 ��ָ�Ĵ�С��ֵ������Ϊint
	printf("%d\n", sizeof(a + 1));  //4 a�Ƕ�ά�������������aΪ��Ԫ�صĵ�ַ����Ԫ�صĵ�ַΪ��һ�еĵ�ַ
	//��һ�еĵ�ַ��1���ǵڶ��еĵ�ַ ��ֻҪ�ǵ�ַ����С����4 
	printf("%d\n", sizeof(*(a + 1))); //16 �Եڶ��еĵ�ַ���н����õĲ������ҵ��˵ڶ��е�����
	//���Դ�СΪ16
	printf("%d\n", sizeof(&a[0] + 1)); //4 ���ǵ�ַ ȡ�����ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 �ҳ��˵ڶ��е�����Ԫ��
	printf("%d\n", sizeof(*a));  //16 ��һ�н�����
	printf("%d\n", sizeof(a[3]));  //16 //��ȻԽ���ˣ����ǲ���Ӱ�죬�������һ�еĴ�С
   //ֻ�ǿ�һ�´�С����
}


#include<stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);  //��1�������������飬ǿ��ת������int* 
	printf("%d,%d", *(a + 1), *(ptr - 1));  //-1��ǰŲ��һ����ָ��5�ĵ�ַ��������֮��
	//�õ��ľ���5��ֵ
	return 0;
	//���Ϊ2 5
}


struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//�ṹ���СΪ20���ֽ�
int main()
{
	p = (struct Test*)0x100000;
	//�������Ҫ����ĵ�����ָ��+1��Ȩ�޵����ж��
	//ָ���Ȩ���Ǻ�ָ�������������ص�
	printf("%p\n", p + 0x1);
	//p��Ϊһ��ָ�������p�Ĵ�С��20���ֽڣ���ô���ڴ˴���˵��p+1�������ܹ����ʵ�Ȩ�޾���20���ֽ�
	//����p+1���ӵľ���20���ֽڣ�0x��16���ƣ�20��16�����¾���14������ΪpΪ0x100000,������+14�Ľ����
	//0x100014
	printf("%p\n", (unsigned long)p + 0x1);
	//�˴�p��ǿ������ת���������Σ�����p+1�ڴ˴�����p+1�����������㣬���Խ��Ϊ
	//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);
	//�˴�p��ǿ������ת������ָ�����ͣ�����ָ��+1��ӵ�е�Ȩ����4���ֽڣ���ô��p+1�Ľ����
	//0x100014
	return 0;
}


#include<stdio.h>
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf( "%x,%x", ptr1[-1], *ptr2);
	return 0;
}


#include <stdio.h>
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };  
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
	//��ӡ�Ľ����1������ĵ��Ƕ��ű��ʽ�����ö��ű��ʽ��������г�ʼ��
}


#include<stdio.h>
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}


#include<stdio.h>
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	//&����������������������飬���������1��λ��������10�ĺ���
	//Ȼ����-1��λ��������10��Ȼ���ٽ����þ͵õ�10λ�ô���ֵ
	//���Խ����Ϊ10
	int *ptr2 = (int *)(*(aa + 1));
	//��Ԫ�صĵ�ַ��1��λ�������˵ڶ��У�Ȼ����н����ã��൱���õ��˵ڶ���
	//Ҳ�����õ���6�ĵ�ַ��Ȼ��-1������5�ĵ�ַ����Ȼ�������
	//�õ���5��ֵ�����Խ��Ϊ5
	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
	//���Ϊ 10 �� 5 
}


#include<stdio.h>
int main()
{
	char* a[] = { "work","at","alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
	//���Ϊat
	//aΪָ������
	//pa+1,����һ��char*�Ĵ�С
}


#include<stdio.h>
int main()
{
	char *c[] = {"ENTER","NEW","POINT","FIRST"};
	char**cp[] = {c+3,c+2,c+1,c};
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
	return 0;
}