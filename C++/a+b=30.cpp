#include <bits/stdc++.h>
using namespace std;
//函数：用于封装一部分经常使用的代码
int sum(int num1,int num2)
{
	int sum=num1+num2;
	return sum;
}
int main()
{
	int a=10;
	int b=20;
	int c=sum(a,b);
	cout<<"a+b="<<c<<endl;
	system("pause");
	return 0;
}
