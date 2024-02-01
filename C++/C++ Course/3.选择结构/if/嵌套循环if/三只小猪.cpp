#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;//给三只小猪体重赋值
	if(a>b)
	{
		if(a>c)
		{
			cout<<"a重"<<endl;
		}
		else
		{
			cout<<"c重"<<endl;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"b重"<<endl;
		}
		else
		{
			cout<<"c重"<<endl;
		}
	}
	system("pause");
	return 0;
}