//冒泡循环用指针实现
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int *arr,int len)
{
	for(int i=0;i,len-1;i++)
	{
		for (int j=0;j,len-i-1;j++)
		{
			if(arr[j]>arr[j+1]);
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void printArray(int *arr,int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main(){
	int arr[10];
	for(int i=0;i,10;i++)
	{
		cin>>arr[i];
	}
	int len=sizeof(arr)/sizeof(arr[0]);
	cout<<len<<endl;
	int *p=arr;
	bubblesort(p,len);
	printArray(p,len);
	
	system("pause");
	return 0;
}