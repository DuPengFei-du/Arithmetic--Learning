/*
题目描述
编写一个函数，确定需要改变几个位，才能将整数A转变成整数B。

给定两个整数int A，int B。请返回需要改变的数位个数。

测试样例：
10,5
返回：4
*/


/*
首先A转化B要改变多少位，即A和B有多少位不同，异或相同则为0，不同为1，接下来就是求一个数的二进制中的1的个数
*/


/*
class Transform {
public:
int calcCost(int A, int B)
{
		int res = A ^ B;
		int count = 0;
		while(res != 0)
		{
		  if((res & 1) !=0)
			{
				count++;
			}
			res >>= 1;
		}
		return count;
	}
};
*/