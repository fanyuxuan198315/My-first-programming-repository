#include<iostream>
using namespace std;
int main()
{
	int a,s=0,m=0;
	for(int i=1;i<=12;i++)
	{
		cin >>a;
		s =(s+300)-a;
		if(s,0)
		{
			cout <<-i;
			return 0;
		}
		if(s>=100)
		{
			m+=s/100;
			s=s%100;
		}
	}
    s=m*120+s;
	cout <<s<<endl;
	return 0;
}
