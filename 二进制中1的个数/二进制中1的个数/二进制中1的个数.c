/*
题目描述
把一个32-bit整型转成二进制，其中包含多少个1，比如5的二进制表达是101，其中包含2个1

输入描述:
输入为整型（十进制），只需兼容32-bit即可，如5、32
输出描述:
输出为字符串，如“2”、“1”

示例1
输入
5
输出
2

说明
5的二进制是101，其中包含2个1
*/


/*
#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	int n=0;
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if((n>>i)&1==1)
			count++;
	}
	printf("%d",count);
	return 0;
}
*/


/*
#include <stdio.h>
int main()
{
	int n,sum = 0;
	int i,j;
	scanf("%d",&n);
	while(n)
	{
		i = n % 2;
		sum = sum + i;
		n = n / 2;
	}
	printf("%d",sum);
	return 0;
}
*/



/*
#include <iostream>
using namespace std;
int main()
{
    int x ;
    cin >> x;
    int temp = 0;
    while(x)
    {
        if(x%2!=0)
           temp++;
        x = x/2;
    }
    cout << temp << endl;
    return 0;
}
*/




/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n = 0;
    while (cin >> n) {
        bitset<32> b(n);
        cout << b.count() << endl;
    }
    return 0;
}
*/

/*
输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
*/
class Solution {
public:
     int  NumberOf1(int n)
     {
         int count=0;
         for(int i=0;i<32;i++)
         {
             if(((n>>i)&1)==1)
                count++;
         }
         return count;
     }
};


/*
世界上有10种人，一种懂二进制，一种不懂。那么你知道两个int32整数m和n的二进制表达，有多少个位(bit)不同么？
*/
class Solution {
public:
    /**
     * 获得两个整形二进制表达位数不同的数量
     *
     * @param m 整数m
     * @param n 整数n
     * @return 整型
     */
    int countBitDiff(int m, int n)
    {
        int a=m^n;
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(((a>>i)&1)==1)
                count++;
        }
        return count;
    }
};
