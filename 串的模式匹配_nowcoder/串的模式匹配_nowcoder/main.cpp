/*
��Ŀ����
���������ַ���A��B�������һ����Ч�㷨���ҵ�B��A�е�һ�γ��ֵ���ʼλ�á���Bδ��A�г��֣��򷵻�-1��
���������ַ���A��B�������ǵĳ���lena��lenb���뷵����Ŀ����Ĵ𰸡�

����������
"acbc",4,"bc",2
���أ�2
*/


//��һ�ַ���
//����Կ⺯����ʹ��û�����ƵĻ������ǿ���ֱ�ӵ��ÿ⺯��
//����������ʾ��
class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb) {
		// write code here
		if (lena < lenb)
			return -1;
		return A.find(B);
	}
};


//�ڶ��ַ���
class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb) {
		if (lenb > lena)
			return -1;
		int i = 0;
		while (lena - i >= lenb)
		{
			int j = 0;
			while (j < lenb)
			{
				if (A[i + j] == B[j])
					j++;
				else
					break;
			}
			if (j == lenb)
				return i;
			i++;
		}
		return -1;
	}
};



//�Լ�д
class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb)
	{
		int i = 0;
		for (i = 0; i < lena; i++)
		{
			int j = 0;
			while (j < lenb)
			{
				if (A[i + j] == B[j])
					j++;
				else
					break;
			}
			if (j == lenb)
				return i;
		}
		return -1;
	}
};