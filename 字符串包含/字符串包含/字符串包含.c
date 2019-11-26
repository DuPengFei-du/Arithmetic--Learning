/*
我们定义字符串包含关系：
字符串A=abc，字符串B=ab，字符串C=ac，则说A包含B，A和C没有包含关系。

输入描述:
两个字符串，判断这个两个字符串是否具有包含关系，测试数据有多组，请用循环读入。

输出描述:
如果包含输出1，否则输出0.

示例1

输入
abc ab

输出
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
//find函数如果没有找到结果的话就会返回-1；
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