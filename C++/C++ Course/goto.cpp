#include<iostream>
using namespace std;
int main()
{
	//不常用，影响代码流程流畅
	cout<<"1.xxxxx"<<endl;
	cout<<"2.xxxxx"<<endl;
	goto FLAG;
	cout<<"3.xxxxx"<<endl;
	cout<<"4.xxxxx"<<endl;
	FLAG:
	cout<<"5.xxxxx"<<endl;
	system("pause");
	return 0;
}