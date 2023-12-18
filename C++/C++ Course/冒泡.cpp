#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,9,5,4,6,3,2,1,7,8};
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<10-1;i++)
	{
		for(int j=0;j<10-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		for(int k=0;k<10;k++)
		{
			cout<<arr[k]<<" ";
		}
		cout<<"  "<<i<<endl;
	
	}
	for(int l=1;l<=10;l++)
	{
		cout<<l<<endl;
	}
	system("pause");
	return 0;
}