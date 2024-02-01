#include <bits/stdc++.h> 
using namespace std;
//结构体：用户自定义的数据类型，允许用户储存不同的数据类型 
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	student s1;
	s1.name="张三";
	s1.age=12;
	s1.score=99;
	cout<<"姓名："<<s1.name<<"年龄："<<s1.age<<"成绩："<<s1.score<<endl;
	system("pause");
	return 0;
}
