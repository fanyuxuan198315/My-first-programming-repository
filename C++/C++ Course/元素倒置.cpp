#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	int start=0;//首元素下表为0，arr[]0
	int end=sizeof(arr)/sizeof(arr[0])-1;
	while(start<end)
	{
		//temp为中间量
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}