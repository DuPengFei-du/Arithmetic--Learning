/*
��һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ�
������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�
Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡�
����:
������볤��Ϊ7������{2,3,1,0,2,5,3}��
��ô��Ӧ������ǵ�һ���ظ�������2��
*/

//����������ʾ��
//��һ��˼·��
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
		//���ж������Ƿ�Ϊ��
		if (NULL == numbers || length == 0)
			return false;
		//Ȼ�����±��Ƿ���������
		for (int i = 0; i < length; i++)
		{
			if (numbers[i]<0 || numbers[i]>length)
				return false;
		}
		//��ʼ����
		for (int i = 0; i < length; i++)
		{
			while (numbers[i] != i)
			{
				if (numbers[i] == numbers[numbers[i]])
				{
					*duplication = numbers[i];
					return true;
				}
				else
				{
					int temp = numbers[i];
					numbers[i] = numbers[temp];
					numbers[temp] = temp;
				}
			}
		}
		return false;
	}
};


//�ڶ���˼·��
//���ù�ϣ��
class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		if (numbers == NULL || length == 0) return 0;
		//���������ж�һ���±�ĺϷ���
		int hashTable[255] = { 0 };
		for (int i = 0; i < length; i++)
		{
			hashTable[numbers[i]]++;
		}
		for (int i = 0; i < length; i++)
		{
			if (hashTable[numbers[i]] > 1)
			{
				duplication[0] = numbers[i];
				//break;
				return true;
			}
		}
		return false;
	}
};