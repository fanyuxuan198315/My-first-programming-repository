#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	//sizeof()   计算长度  size长度  of ...的
	//sizeof（arr）是整个数组的长度
	//sizeof（arr[0]）是一个首元素的长度
	//相除得到数组含有的元素个数，0~4，共五个元素
	for(int i=0;i<=(sizeof(arr)/sizeof(arr[0])-1);i++)
	{
		cout<<arr[i]<<endl;
	}
	system("pause");
	return 0;
}