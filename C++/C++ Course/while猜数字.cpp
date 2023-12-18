#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num=rand()%100;//0~99随机数，上有时间函数ctime才真正会每次都不一样
	int val;
	while(1)
	{
		cin>>val;//每次循环都先输入你猜的数进行对比
		if(val>num)
		{
			cout<<"da  le"<<endl;
		}
		else if(val<num)
		{
			cout<<"xiao  le"<<endl;
		}
		else
		{
			cout<<"good!!!"<<endl;
			break;//猜对了就退出循环
		}
	}
	system("pause");
	return 0;
}
