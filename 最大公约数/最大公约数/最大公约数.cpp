/*
��������������0������M��N����M��N�����Լ����
*/


/*
#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d",&a,&b);
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("%d",b);
	return 0;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int t;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(t=a%b)
	{
		a=b;
		b=t;
	}
	return b;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n)<<endl;
	return 0;
}
*/