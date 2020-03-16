/*
题目描述
对于两个字符串A，B。请设计一个高效算法，找到B在A中第一次出现的起始位置。若B未在A中出现，则返回-1。
给定两个字符串A和B，及它们的长度lena和lenb，请返回题目所求的答案。

测试样例：
"acbc",4,"bc",2
返回：2
*/


//第一种方法
//如果对库函数的使用没有限制的话，我们可以直接调用库函数
//代码如下所示：
class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb) {
		// write code here
		if (lena < lenb)
			return -1;
		return A.find(B);
	}
};


//第二种方法
class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb) {
		if (lenb > lena)
			return -1;
		int i = 0;
		while (lena - i >= lenb)
		{
			int j = 0;
			while (j < lenb)
			{
				if (A[i + j] == B[j])
					j++;
				else
					break;
			}
			if (j == lenb)
				return i;
			i++;
		}
		return -1;
	}
};



//自己写
class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb)
	{
		int i = 0;
		for (i = 0; i < lena; i++)
		{
			int j = 0;
			while (j < lenb)
			{
				if (A[i + j] == B[j])
					j++;
				else
					break;
			}
			if (j == lenb)
				return i;
		}
		return -1;
	}
};