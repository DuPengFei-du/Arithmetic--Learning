/*
假定我们都知道非常高效的算法来检查一个单词是否为其他字符串的子串。
请将这个算法编写成一个函数，给定两个字符串s1和s2，
请编写代码检查s2是否为s1旋转而成，要求只能调用一次检查子串的函数。
给定两个字符串s1,s2,请返回bool值代表s2是否由s1旋转而成。
字符串中字符为英文字母和空格，区分大小写，字符串长度小于等于1000。

"Hello world","worldhello "
返回：false（因为大小写不一致）
"waterbottle","erbottlewat"
返回：true
*/


/*
思路：
以s1=ABCD为例，我们先分析s1进行循环移位之后的结果：
ABCD->BCDA->CDAB->DABC->ABCD  .......
假设我们把前面移走的数据进行保留：
ABCD->ABCDA->ABCDAB->ABCDABC->ABCDABCD.....
因此看出，对s1做循环移位，所得字符串都将是字符串s1s1的子字符串。如果s2可以由s1循环移位得到，则一定可以在s1s1上。
*/


//class ReverseEqual {
//public:
//	bool checkReverseEqual(string s1, string s2) {
//		// write code here
//		int len1 = s1.size();
//		int len2 = s2.size();
//		if (len1 != len2 || len1 < 0 || len2 < 0)
//			return false;
//		string str = s1 + s1;
//		if (str.find(s2) == -1)
//      因为string的find在没有找到的时候，
//      是返回一个非常大的值，
//      在32位机上，-1的二进制表示形式与2的32次方-1的值一样，
//      都是11111111 11111111 11111111 11111111
//			return false;
//		return true;
//	}
//};

/*
因为string的find在没有找到的时候，
是返回一个非常大的值，
在32位机上，-1的二进制表示形式与2的32次方-1的值一样，
都是11111111 11111111 11111111 11111111
*/