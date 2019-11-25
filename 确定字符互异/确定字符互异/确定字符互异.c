/*
请实现一个算法，确定一个字符串的所有字符是否全都不同。
这里我们要求不允许使用额外的存储结构。
给定一个string iniString，请返回一个bool值,True代表所有字符全都不同，False代表存在相同的字符。
保证字符串中的字符为ASCII字符。字符串的长度小于等于3000。


测试样例：
"aeiou"
返回：True
"BarackObama"
返回：False
*/


/*
大致意思就是，如果字符串中有相同的字符就返回false，如果全部字符都不相同，那么就返回true.
*/

/*
1）哈希法 
首先char类型判断重复，用hash数组最方便，只需要256个bool类型即可，
O(n)的时间（其实只要判断前257个就行了O(1)，抽屉原理），
但是题目要求不能使用额外的存储结构，那么这个方法KO掉。
2）遍历 
那么只能用两层for循环遍历，时间复杂度为O(n*n)，
但是根据抽屉原理，没必要遍历到N，只需要遍历到前257就够了，如果N<257就遍历到N，所以时间复杂度其实为O(1)
3）排序 
既然题目要求不能使用额外空间，而参数列表没有const或引用，那么就可以对字符串排序，
然后再判断，需要O（nlogn)排序，然后再遍历一遍O(n)。
其实也没必要全都排序，只需前257个，同抽屉原理。
*/

//class Different {
//public:
//	bool checkDifferent(string iniString)
//	{
//		// write code here
//		int len = iniString.size();
//		for (int i = 0; i < len; i++)
//		{
//			for (int j = i + 1; j < len; j++)
//			{
//				if (iniString[i] == iniString[j])
//					return false;
//			}
//		}
//		return true;
//	}
//};