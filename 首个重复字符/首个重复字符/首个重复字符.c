/*
����һ���ַ����������һ����Ч�㷨���ҵ���һ���ظ����ֵ��ַ���
����һ���ַ���(��һ��ȫΪ��ĸ)A�����ĳ���n��
�뷵�ص�һ���ظ����ֵ��ַ���
��֤�ַ��������ظ��ַ����ַ����ĳ���С�ڵ���500��

����������
"qywyer23tdd",11
���أ�y

*/


/*
class FirstRepeat {
public:
	char findFirstRepeat(string A, int n)
	{
		// write code here
		int i=0;
		bool times[256]={0};
		if(A.size()==0||n==0)
			return 0;
		for(i=0;i<n;i++)
		{
			if(!times[A[i]])
			{
				times[A[i]]=1;
			}
			else
				break;
		}
		return A[i];
	}
};
*/