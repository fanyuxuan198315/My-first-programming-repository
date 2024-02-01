#include<bits/stdc++.h>
using namespace std;
int main()
{
	//有100次输入机会，输入0退出
	int score;
	for(int i=0;i<100;i++)
	{
		cin>>score;
		if(score==0)
		{
			return 0;
		}
		switch(score)
	{
		case 100:
			cout<<"excellent"<<endl;
			break;
		case 80:
			cout<<"good"<<endl;
			break;
		case 60:
			cout<<"pass"<<endl;
			break;	
		default:
			cout<<"just so so"<<endl;
	}
	

	}

	
	system("pause");
	return 0;
}