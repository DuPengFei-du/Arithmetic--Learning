/*
��Ŀ����
��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2��
��������������0��
*/



/*
�����Ŀ�ģ�
���������������������������ڣ���һ���������м��Ǹ�����
�����磺1��2��2��2��3����2��2��2��3��4����2��3��4��4��4�ȵȣ�
���ַ�����Ȼ������⣬�������漰������sort����ʱ�临�Ӷ�ΪO(NlogN)�������ţ�
*/



/*
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		//�ȶ���������пղ���
		if(numbers.empty())
			return 0;
		sort(numbers.begin(),numbers.end());
		int middle=numbers[numbers.size()/2];
		int count=0;
		for(int i=0;i<numbers.size();i++)
		{
			if(numbers[i]==middle)
			{
				count++;
			}
		}
		return (count>numbers.size()/2)?middle:0;
	}
};
*/


/*
˼·��������з������������֣��������ֵĴ����������������ֳ��ֵĴ����ͻ�Ҫ�ࡣ
�ڱ�������ʱ��������ֵ��һ��������һ�����֣�һ�Ǵ�����
������һ������ʱ��������֮ǰ�����������ͬ���������1�����������1��������Ϊ0���򱣴���һ�����֣�����������Ϊ1��
��������������������ּ�Ϊ����Ȼ�����ж����Ƿ�����������ɡ�
�ο��������£�
*/


/*
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		if(numbers.empty()) return 0;

		// ����ÿ��Ԫ�أ�����¼����������ǰһ��Ԫ����ͬ���������1�����������1
		int result = numbers[0];
		int times = 1; // ����

		for(int i=1;i<numbers.size();++i)
		{
			if(times == 0)
			{
				// ����result��ֵΪ��ǰԪ�أ����ô���Ϊ1
				result = numbers[i];
				times = 1;
			}
			else if(numbers[i] == result)
			{
				++times; // ��ͬ���1
			}
			else
			{
				--times; // ��ͬ���1
			}
		}

		// �ж�result�Ƿ���������������ִ����������鳤�ȵ�һ��
		times = 0;
		for(int i=0;i<numbers.size();++i)
		{
			if(numbers[i] == result) ++times;
		}

		return (times > numbers.size()/2) ? result : 0;
	}
};

*/