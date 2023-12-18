#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[3][3];
	//输入数据
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	//输出一下
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	//每行求和
	for(int i=0;i<3;i++)
	{
		int sum=0;
		for(int j=0;j<3;j++)
		{
			
			sum+=arr[i][j];
		}
		cout<<sum<<endl;
	}
	system("pause");
	return 0;
}