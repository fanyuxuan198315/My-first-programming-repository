#include<iostream>
using namespace std;
int main()
{
	int score=0;//score是成绩的意思，初始化定义score
	cout<<"输入成绩"<<endl;
	cin>>score;//输入
	if(score>90)//开始判断，若成绩大于90，则输出A+
	{
		cout<<"A+"<<endl;
	}
	else if(score>80)//如果大于90不成立则继续往下执行，到这判断大于80吗，成立则输出A，否则继续
	{
		cout<<"A"<<endl;
	}
	else if(score>70)//else的意思是 其他，if意思是 如果
	{
		cout<<"B"<<endl;
	}
	else if(score>60)
	{
		cout<<"C"<<endl;
	}
	else//若还有判断条件，则继续else if，没有就以else结尾
	{
		cout<<"hello"<<endl;
	}
	system("pause");
	return 0;
}