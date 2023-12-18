#include<iostream>
using namespace std;
int main()
{
	//比较两个值大小，把大的值赋值给c
	int a,b,c;
	cin>>a>>b;
	a>b?c=a:c=b;
	//或者c=(a>b?a:b)，此为返回一个变量给c
	//既然是变量就可以赋值，可以如此:(a>b?a:b)=100;
	cout<<"c="<<c<<endl;
	system("pause");
	return 0;
}