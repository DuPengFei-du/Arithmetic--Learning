/*
���Ƕ����ַ���������ϵ��
�ַ���A=abc���ַ���B=ab���ַ���C=ac����˵A����B��A��Cû�а�����ϵ��

��������:
�����ַ������ж���������ַ����Ƿ���а�����ϵ�����������ж��飬����ѭ�����롣

�������:
����������1���������0.

ʾ��1

����
abc ab

���
1
*/


/*
#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	while (cin >> a >> b) {
		if (a.find(b) != -1 || b.find(a) != -1)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
//find�������û���ҵ�����Ļ��ͻ᷵��-1��
*/


/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2;
	while(cin>>str1>>str2){
		int result=str1.size()>str2.size()?str1.find(str2):str2.find(str1);
		cout<<(result!=string::npos ? 1:0)<<endl;
	}
	return 0;
}
*/