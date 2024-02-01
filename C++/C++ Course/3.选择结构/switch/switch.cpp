#include<iostream>
using namespace std;
int main()
{
	int score;//score成绩
	cin>>score;
	switch(score)//score是数值点，不是范围
	{
		case 10://当score是10的时候
			cout<<"A+"<<endl;
			break;//不加的话会一直往下执行至全部输出
		case 9:
			cout<<"A"<<endl;
			break;
		case 8:
			cout<<"A-"<<endl;
			break;
		default:          //否则
			cout<<"bad"<<endl;
	}
	system("pause");
	return 0;
}