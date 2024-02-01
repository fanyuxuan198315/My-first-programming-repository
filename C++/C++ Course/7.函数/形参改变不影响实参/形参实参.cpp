#include<bits/stdc++.h>
using namespace std;
void swap(int num1,int num2)
{
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	cout<<endl;
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	cout<<endl;
}
int main()
{
	int a=1;
	int b=2;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	system("pause");
	return 0;
}