#include<iostream>
using namespace std;
int main()
{
	int num=100;
	do
	{
		int a=num%10;//个位数
		int b=num%100/10;
		int c=num/100;
		if(a*a*a+b*b*b+c*c*c==num)
		{
			cout<<num<<" ";
		}
		num++;
	}while(num<1000);
	system("pause");
	return 0;
}