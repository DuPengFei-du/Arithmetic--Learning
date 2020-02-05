/*
��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���

ʾ�� 1��

���룺["h","e","l","l","o"]
�����["o","l","l","e","h"]
ʾ�� 2��

���룺["H","a","n","n","a","h"]
�����["h","a","n","n","a","H"]
*/


//�ⷨ1��
class Solution {
public:
	void reverseString(vector<char>& s)
	{
		for (int i = 0; i < s.size() / 2; i++)
		{
			char temp = s[i];
			s[i] = s[s.size() - 1 - i];
			s[s.size() - 1 - i] = temp;
		}
	}
};


//�ⷨ2��
//ֱ�ӵ���c++�е�reverse����
class Solution {
public:
	void reverseString(vector<char>& s)
	{
		reverse(s.begin(), s.end());
	}
};


//�ⷨ3��
//����˫ָ�����
var reverseString = function(s) 
{
	var i = 0, j = s.length - 1;
	while (i < j) 
	{
		var temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
};