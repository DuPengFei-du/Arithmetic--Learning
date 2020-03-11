/*
请实现一个函数，将一个字符串中的每个空格替换成“%20”。
例如，当字符串为We Are Happy.
则经过替换之后的字符串为We%20Are%20Happy。
*/

class Solution {
public:
	void replaceSpace(char* str, int length)
	{
		int count = 0;
		//先判断数组的有效性
		if (NULL == str || length == 0)
			return;
		//开始遍历，查找空格的数目
		for (int i = 0; i < length; i++)
		{
			if (str[i] == ' ')
				count++;
		}
		for (int i = length - 1; i >= 0; i--)
		{
			if (str[i] != ' ')
				str[i + 2 * count] = str[i];
			else
			{
				count--;
				str[i + 2 * count + 2] = '0';
				str[i + 2 * count + 1] = '2';
				str[i + 2 * count] = '%';
			}
		}
	}
};