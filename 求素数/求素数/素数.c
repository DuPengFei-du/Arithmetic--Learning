/*
����M��N��1 < M < N < 1000000��
������[M,N]�ڵ����������ĸ�����
�������壺����1���⣬ֻ�ܱ�1���Լ���������Ȼ����Ϊ����
*/




/*
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i=0;
	int j=0;
	int count=0;
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=sqrt(i)+1;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i||j>sqrt(i)+1)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
*/