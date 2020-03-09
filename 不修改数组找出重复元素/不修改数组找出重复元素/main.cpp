/*
 ��Ŀ����һ������Ϊn+1����������������ֶ���1~n�ķ�Χ�ڣ���������������һ���������ظ���
 ���ҳ�����������һ���ظ������֣��������޸���������顣
 ����
 ������볤��Ϊ8������{2,3,5,4,3,2,6,7}����ô��Ӧ��������ظ�������2����3��
*/


/*
����һ����Ϊ���ܸı���������飬���ǿ��Զ���һ������Ϊn+1�ĸ�������
Ȼ����������±���һ������������Ԫ�ظ�ֵ�������飬�����������ܷ������ĸ��������ظ��ġ�
���÷�����ҪO(n)�ĸ����ռ䡣
*/


/*
	�������ܣ��ж��������Ƿ����ظ�����
	������
		numbers:������,
		length:���鳤��
		value:�ظ�������
	����ֵ��
		true:�ҵ���ֵ
		false��δ�ҵ���ֵ���߲������Ϸ�
*/
bool selectDuplicate(int numbers[], int length, int* value)
{
	//�Ϸ����ж�
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
			std::cout << "�ظ�������Ϊ:" << numbers[i] << std::endl;
			*value = numbers[i];
			return true;
		}
		assistantArray[numbers[i]] = numbers[i];
	}
	free(assistantArray);
	return false;
}

/*
 ��������
 ���ö���˼�롣
 ���ǰ�1~n�����ִ��м������middle��Ϊ������
 ͳ������������1~middle�����ֵ���Ŀ������ⲿ����Ŀ����middle
 ��˵���˲����к����ظ����֣�������������һ���ֺ����ظ����֡�
 �������ƣ��������ڵ���Ŀ�������С�Ƚϣ�ֱ�������ͷβ��ȣ����ҵ����ظ����֡�
*/

/*
	����˼·��
	1.����һ����ͬ��С�����飬�����±꽫ԭ��������ַ���
	2.���ֲ���
*/
/*
	���ֲ���
	������
		numbenrs������
		length: ���鳤��
		*value���ظ�������
	����ֵ��
		���ظ������ַ��� true
		���ظ������ַ��� false
*/
bool selectDuplicate(int numbers[], int length, int* value)
{
	//�Ϸ����ж�
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