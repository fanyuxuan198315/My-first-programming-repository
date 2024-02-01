#include <bits/stdc++.h>
using namespace std;
void change(int *p1,int *p2)//值传递时，形参实参互不影响，传地址时，影响
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
	cout<<"a= "<<*p1<<endl;
	cout<<"b= "<<*p2<<endl;
}//int *p1 = &a;
int main()
{
	int a=10;
	int b=20;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<endl;
	change(&a,&b);
	cout<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	system("pause");
	return 0;
}