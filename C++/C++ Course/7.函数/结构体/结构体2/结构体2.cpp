#include <bits/stdc++.h>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
}s3;
int main(){
//	第一种定义方法
//	student s1;
//	s1.age=11;
//	s1.name="jack";
//	s1.score=1;
//	cout<<"name:"<<s1.name<<" age: "<<s1.age<<" score: "<<s1.score<<endl;


//	第二种定义方法
//	student s2={"niu",2,2};
//	cout<<"name:"<<s2.name<<" age: "<<s2.age<<" score: "<<s2.score<<endl;
	
	//第三种定义方法
	s3.age=11;
	s3.name="jack";
	s3.score=1;
	cout<<"name:"<<s3.name<<" age: "<<s3.age<<" score: "<<s3.score<<endl;
	system("pause");
	return 0;
	}