class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int rows = array.size() - 1;
		int cols = array[0].size() - 1;
		int i = 0, j = cols;
		while (i <= rows && j >= 0)
		{
			if (array[i][j] < target)
			{
				i++;
			}
			else if (array[i][j] > target)
			{
				j--;
			}
			else
				return true;
		}
		return false;
	}
};


class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int rows = array.size() - 1;
		int cols = array.size() - 1;
		int i = 0, j = cols;
		while (i <= rows && j >= 0)
		{
			if (array[i][j] < target)
			{
				i++;
			}
			else if (array[i][j] > target)
			{
				j--;
			}
			else
				return true;
		}
		return false;
	}
};