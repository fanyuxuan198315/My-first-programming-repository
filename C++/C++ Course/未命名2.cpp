#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<=100;i++)
	{
		if(i%2==0)
		{
			continue;
			//break则不然
		}
		cout<<i<<endl;
	}
	system("pause");
	return 0;
}