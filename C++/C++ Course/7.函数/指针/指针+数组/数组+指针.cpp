#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int *p=arr;//取数组首地址，没有&
	for(int i=0;i<10;i++)
	{
		cout<<*p<<"   adress:   "<<p<<endl;
		p++;
	}
	system("pause");
	return 0;
}