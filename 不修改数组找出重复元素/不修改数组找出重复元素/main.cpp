/*
 题目：在一个长度为n+1的数组里的所有数字都在1~n的范围内，所以数组至少有一个数字是重复的
 请找出数组中任意一个重复的数字，但不能修改输入的数组。
 例如
 如果输入长度为8的数组{2,3,5,4,3,2,6,7}，那么对应的输出是重复的数字2或者3。
*/


/*
方法一：因为不能改变输入的数组，我们可以定义一个长度为n+1的辅助数组
然后根据数组下标逐一把输入的数组的元素赋值到辅数组，这样很容易能发现那哪个数组是重复的。
但该方法需要O(n)的辅助空间。
*/


/*
	函数功能：判断数组中是否含有重复数字
	参数：
		numbers:数组名,
		length:数组长度
		value:重复的数字
	返回值：
		true:找到改值
		false：未找到改值或者参数不合法
*/
bool selectDuplicate(int numbers[], int length, int* value)
{
	//合法性判断
	if (numbers == nullptr || length <= 0)
	{
		return false;
	}

	for (int i = 0; i < length; i++)
	{
		if (numbers[i]<1 || numbers[i] > length)
		{
			return false;
		}
	}
	int* assistantArray = (int*)malloc(sizeof(int) * length);
	for (int i = 0; i < length; i++)
	{
		if (assistantArray[numbers[i]] = numbers[i])
		{
			std::cout << "重复的数字为:" << numbers[i] << std::endl;
			*value = numbers[i];
			return true;
		}
		assistantArray[numbers[i]] = numbers[i];
	}
	free(assistantArray);
	return false;
}

/*
 方法二：
 采用二分思想。
 我们把1~n的数字从中间的数字middle分为两部分
 统计输入数组中1~middle的数字的数目，如果这部分数目大于middle
 则说明此部分中含有重复数字，否则就是另外的一部分含有重复数字。
 依此类推，将区间内的数目和区间大小比较，直到区间的头尾相等，就找到了重复数字。
*/

/*
	解题思路：
	1.定义一个相同大小的数组，按照下标将原数组的数字放入
	2.二分查找
*/
/*
	二分查找
	参数：
		numbenrs：数组
		length: 数组长度
		*value：重复的数字
	返回值：
		有重复的数字返回 true
		无重复的数字返回 false
*/
bool selectDuplicate(int numbers[], int length, int* value)
{
	//合法性判断
	if (numbers == nullptr || length <= 0)
	{
		return false;
	}

	int start = 1;
	int end = length - 1;
	while (end >= start)
	{
		int middle = ((end - start) >> 1) + start;
		int count = countRange(numbers, length, start, middle);
		std::cout << "start:" << start << std::endl;
		std::cout << "middle:" << middle << std::endl;
		std::cout << "end:" << end << std::endl;

		if (end == start)
		{
			if (count > 1)
			{
				*value = start;
				return true;
			}
			else
			{
				break;
			}
		}
		if (count > (middle - start + 1))
		{
			end = middle;
		}
		else
		{
			start = middle + 1;
		}

	}
	return false;
}