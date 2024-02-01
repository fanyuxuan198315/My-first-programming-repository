#include <bits/stdc++.h>
//结构体数组
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
int main(){
	student stuArray[3]=
	{
		{"zhangsan",11,60},
		{"lisi",12,70},
		{"wangwu",13,80}
	};
	for(int i=0;i<3;i++)
	{
		cout<<"name:"<<stuArray[i].name<<"  age:"<<stuArray[i].age<<"  score:"<<stuArray[i].score<<endl;
	}
	system("pause");
	return 0;	
}