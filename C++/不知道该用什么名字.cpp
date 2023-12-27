#include<iostream>
using namespace std;
void chang(int num1,int num2)
{
	cout<<"num1"<<num1<<endl;
	cout<<"num1"<<num1<<endl;
	int temp=num1;
	num1=num2;
	num2=temp;
}
int main()
{
	int a=1,b=2;
	chang(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
