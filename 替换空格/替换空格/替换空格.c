/*
在网络编程中，如果URL参数中含有特殊字符，如空格，#等，则可能倒置服务器端无法获得正确的参数值。
我们需要将这些特殊符号转换成服务器可以识别的字符，转换规则是在%后跟上ASCII码的两位16进制表示。
比如空格的ASCII码是32，即十六进制的0x20，因此空格倍替换成%20，再比如#的ASCII码值为35，即十六
进制的23，所以他在URL中被替换成%23.
*/

/*
替换空格，首先想到原来是一个字符，替换之后变成了%，2，3，三个字符。因此字符串就会变长，如果是在原来的字符串
上进行替换，那么就有可能覆盖修改在该字符串后面的内存。如果是创建新的字符串并且在新的字符串上进行替换，那么
我们可以自己分配足够多的内存。
*/

/*
如何进行空格的替换，我们所能想到的最直接的方法就是从头到尾遍历字符串，每次碰到空格字符的时候就进行替换，由于是把一个
字符替换成3个字符，我们必须把空格后面的所有字符都向后移动2个字节，否则就会有两个字符被覆盖掉。
假设字符串的长度是n，对每个空格字符，需要移动后面O(n)个字符，因此对于含有O(n)个空格字符的字符串来说，时间复杂度为O(n^2)
*/

/*
我们换一种思路，把从前向后替换，换成从后向前替换。
先遍历一遍字符串，统计出来字符串中空格的数量。每次替换一个空格，长度就会增加2，所以替换之后字符串的长度
等于原先字符串的长度+2*空格的个数。
我们从字符串的后面开始替换和复制，首先准备两个指针，一个p1，一个p2，p1指向原始字符串的末尾，p2指向替换之后字符串的末尾
接下来我们向前移动p1，逐个把他指向的字符复制到p2指向的位置，直到碰到第一个空格为止。
*/


//class Solution {
//public:
//	void replaceSpace(char* str, int length) {
//		int count = 0;
//		for (int i = 0; i < length; i++) {
//			if (str[i] == ' ')
//				count++;//空格的个数
//		}
        //从后往前找
//		for (int i = length - 1; i >= 0; i--) {
//			if (str[i] != ' ') {
//				str[i + 2 * count] = str[i];
//			}
//			else {
//				count--;
//				str[i + 2 * count] = '%';
//				str[i + 2 * count + 1] = '2';
//				str[i + 2 * count + 2] = '0';
//			}
//		}
//	}
//};




//class Solution {
//public:
//	void replaceSpace(char* str, int length) {
//		if (str == NULL)
//			return;
//		int CountOfBlanks = 0;
//		int Originallength = 0;
//		for (int i = 0; str[i] != '\0'; i++)
//		{
//			Originallength++;
//			if (str[i] == ' ')
//				++CountOfBlanks;
//		}
//		int len = Originallength + 2 * CountOfBlanks;
//		if (len + 1 > length)
//			return;
//
//		char* pStr1 = str + Originallength;//复制结束符‘\0’
//		char* pStr2 = str + len;
//		while (pStr1 < pStr2)
//		{
//			if (*pStr1 == ' ')
//			{
//				*pStr2-- = '0';
//				*pStr2-- = '2';
//				*pStr2-- = '%';
//			}
//			else
//			{
//				*pStr2-- = *pStr1;
//			}
//			--pStr1;
//		}
//	}
//};