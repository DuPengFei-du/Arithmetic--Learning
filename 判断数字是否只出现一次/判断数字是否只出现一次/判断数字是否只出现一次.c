/*
题目描述
给定一个个数字arr，判断数组arr中是否所有的数字都只出现过一次。

输入描述:
输入包括两行，第一行一个整数n(1≤n≤10^5)
代表数组arr的长度。第二行包括n个整数，代表数组arr(1≤arr[i]≤10^7)

输出描述:
如果arr中所有数字都只出现一次，输出“YES”，否则输出“NO”。
示例1

输入
3
1 2 3
输出
YES
示例2
输入
3
1 2 1
输出
NO

备注:
要求
1.时间复杂度O（n）O（n）。
2.额外空间复杂度O（1）O（1）。
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