/*
题目描述
有一个排过序的数组，包含n个整数，但是这个数组向左进行了一定长度的移位，
例如，
原数组为[1,2,3,4,5,6]，向左移位5个位置即变成了[6,1,2,3,4,5],现在对于移位后的数组，需要查找某个元素的位置。
请设计一个复杂度为log级别的算法完成这个任务。

给定一个int数组A，为移位后的数组，同时给定数组大小n和需要查找的元素的值x，请返回x的位置(位置从零开始)。保证数组中元素互异。

测试样例：
[6,1,2,3,4,5],6,6
返回：0

*/


/*
解题思路:
该题目其实是一个二分查找的变形，在二分查找的基础上，稍作改变就可以了

具体方法如下所示：
再解这个题之前要抓住：数组是经过移位的，那么中间元素的两侧有一边肯定是有序的。
找到数组A中间位置mid，确定目标数x在该数哪一边。
1.如果x==A[mid]时，找到了返回mid
2.当>大于A[mid]时，分两种情况：
如果数组开头数A[left]大于A[mid]，说明右半边是升序的，
因为移位之后，肯定会将大的元素移动到左边，此时，如果x>A[right]是，说明x在mid左侧
否则，x位于区间右半侧
3.当x<A[mid]时，分两种情况;
如果数组开头元素小于mid说明左半边时有序的，此时如果x<A[left],说明x在区间右半侧，
否则x在区间左半侧;

*/



/*
class Finder {
public:
	int findElement(vector<int> A, int n, int x)
	{
		int left=0;
		int right=n-1;
		while(left<=right)
		{
			int mid=left+(right-left)/2;
			if(x==A[mid])
				return mid;
			if(x<A[mid])
			{
				if(A[left]<A[mid]&&x<A[left])
				{
					left=mid+1;
				}
				else
					right=mid-1;
			}
			else
			{
				if(A[left]>A[mid]&&x>A[right])
				{
					right=mid-1;
				}
				else
					left=mid+1;
			}
		}
		return -1;
	}
};
*/