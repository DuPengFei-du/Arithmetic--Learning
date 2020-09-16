class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication)
	{
		if (nullptr == numbers || length == 0)
			return false;
		for (int i = 0; i < length; i++)
		{
			while (numbers[i] != i)
			{
				if (numbers[i] == numbers[numbers[i]])
				{
					duplication[0] = numbers[i];
					return true;
				}
				int temp = numbers[i];
				numbers[i] = numbers[temp];
				numbers[temp] = temp;
			}
		}
		return false;
	}
};


class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication)
	{
		if (nullptr == numbers || length == 0)
			return false;
		int hashtable[255] = { 0 };
		for (int i = 0; i < length; i++)
		{
			hashtable[numbers[i]]++;
		}
		for (int i = 0; i < length; i++)
		{
			if (hashtable[numbers[i]] > 1)
			{
				duplication[0] = numbers[i];
				return true;
			}
		}
		return false;
	}
};


class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication)
	{
		if (nullptr == numbers || length == 0)
			return false;
		sort(numbers, numbers + length - 1);
		for (int i = 0; i < length; i++)
		{
			if (numbers[i] == numbers[i + 1])
			{
				duplication[0] = numbers[i];
				return true;
			}
		}
		return false;
	}
};