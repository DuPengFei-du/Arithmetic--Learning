/*
��Ŀ����
����һ��������arr���ж�����arr���Ƿ����е����ֶ�ֻ���ֹ�һ�Ρ�

��������:
����������У���һ��һ������n(1��n��10^5)
��������arr�ĳ��ȡ��ڶ��а���n����������������arr(1��arr[i]��10^7)

�������:
���arr���������ֶ�ֻ����һ�Σ������YES�������������NO����
ʾ��1

����
3
1 2 3
���
YES
ʾ��2
����
3
1 2 1
���
NO

��ע:
Ҫ��
1.ʱ�临�Ӷ�O��n��O��n����
2.����ռ临�Ӷ�O��1��O��1����
*/


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<int,int>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		m[arr[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(m[arr[i]]>1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
*/


/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	bool flag=false;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]==arr[i])
		{
			flag=true;
			break;
		}
	}
	if(!flag)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<endl;
	return 0;
}
*/