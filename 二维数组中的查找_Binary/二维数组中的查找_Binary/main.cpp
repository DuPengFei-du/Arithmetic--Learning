class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		for (int i = 0; i < array.size(); i++)
		{
			int begin = 0;
			int end = array[0].size() - 1;
			while (begin <= end)
			{
				int mid = begin + (end - begin) / 2;
				if (target < array[i][mid])
					end = mid - 1;
				else if (target > array[i][mid])
					begin = mid + 1;
				else if (target = array[i][mid])
					return true;
			}
		}
		return false;
	}
};



class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int rows = array.size() - 1;
		int cols = array[0].size() - 1;
		int i = 0, j = cols;
		while (i <= rows && j >= 0)
		{
			if (array[i][j] == target)
				return true;
			else if (array[i][j] < target)
				i++;
			else if (array[i][j] > target)
				j--;
		}
		return false;
	}
};
