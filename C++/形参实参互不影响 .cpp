#include <bits/stdc++.h>
using namespace std;
//形参实参互不影响 
void change(int num1,int num2) //change变化，交换   void空 
{
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
}
int main()
{
	int a=1;
	int b=2;
	change(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	system("pause");
	return 0;
}
