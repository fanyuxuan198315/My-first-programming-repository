#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int score;
	cin>>score;
	if(score>60)
	{
		if(score>90)
		{
			cout<<"A,你好"<<endl;
		}
		else if(score>80)
		{
			cout<<"B"<<endl;
		}
		else if(score>70)
		{
			cout<<"C"<<endl;
		}
		else
		{
			cout<<"D"<<endl;
		}
		
	}
	else
	{
		cout<<"E"<<endl;
	}
	system("pause");
	system("chcp 65001");
	system("cls");
	return 0;
}