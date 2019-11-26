/*
对于一个字符串，请设计一个高效算法，找到第一次重复出现的字符。
给定一个字符串(不一定全为字母)A及它的长度n。
请返回第一个重复出现的字符。
保证字符串中有重复字符，字符串的长度小于等于500。

测试样例：
"qywyer23tdd",11
返回：y

*/


/*
class FirstRepeat {
public:
	char findFirstRepeat(string A, int n)
	{
		// write code here
		int i=0;
		bool times[256]={0};
		if(A.size()==0||n==0)
			return 0;
		for(i=0;i<n;i++)
		{
			if(!times[A[i]])
			{
				times[A[i]]=1;
			}
			else
				break;
		}
		return A[i];
	}
};
*/