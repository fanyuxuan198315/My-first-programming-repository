#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++)
    {
    	cout<<arr[i]<<" ";
	}
	-------------------------------------------------------------------------------------------------------------------------------------------------------------------cout<<endl;
	int start=0;
	int end=sizeof(arr)/sizeof(arr[0])-1;
	int temp;
	while(start<end)
	{
		temp=arr[start];
		arr[start]=ar