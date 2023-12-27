#include<bits/stdc++.h>	
using namespace std;
int main()
{
	int a[1001],temp;
	int n;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
 			}
		}
	}
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
}
