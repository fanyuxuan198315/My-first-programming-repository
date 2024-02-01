#include<iostream>
using namespace std;
int main()
{
	int arr[5]={100,500,600,800,400};
	int max=0;//max最大值
	for(int i=0;i<=4;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<max;
	system("pause");
	return 0;
}