#include<iostream>
using namespace std;
int main()
{
	int n=1;
	long long e=1;//到了13，就会越界，所以用long long
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		e*=i;
		
		cout<<e<<endl;
	}
	

	
	system("pause");
	return 0;
}