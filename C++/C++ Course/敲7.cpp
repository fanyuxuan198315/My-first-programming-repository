#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<71;i++)
	{
		if(i%7==0)         //下面两个条件可以简化成if(i%7==0||i%10==7)
		{
			cout<<"qiao"<<" ";
		}
		else if(i%10==7)
		{
			cout<<"qiao"<<" ";
		}
		else
		{
			cout<<i<<" ";
		}
	}
	system("pause");
	return 0;
}