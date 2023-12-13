#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;

// main() 是程序开始执行的地方

int main()
{
	int number = 0;
	int number2 = 3;
	int numofstudent;
	string first;
	const int num = 123456;
	bool zhuanghu2 = 0;
	printf("默认密码：123456");
	printf("\n""是否注册账户，是填1，不是填0");
	cin >> zhuanghu2;
	
	if (zhuanghu2 == 0)
	{
		
		printf("请注册账户：");
		cin >> first;
		printf("\n""");
		printf("\n""");
		printf("\n""");
		string second;
		printf("请确认账户：");
		cin >> second;
		
		if (second == first) {
			printf("通过注册");
			
		}
		else {
			printf("请重新输入");
			
		}
	
		
		
			
	}		
	else {
		string zhanghu;
		printf("请输入你的账户");
		cin >> zhanghu;
		while (number<number2)
		{
			if (zhanghu == first)
			{
				break;
			}
			if (zhanghu == first) {
				
				printf("输错了，请从试");
				printf("请输入你的账户：");
				number++;
			}
			if (number >= 3) {
				printf("你已经没有机会了");
			}

		}

	}
	
	printf("\n""");
	printf("\n""");
	printf("\n""");
	string third;
	printf("请输入账号：");
	cin >> third;
	int num2;
	printf("请输入密码：");
	cin >> num2;
	if (third == first) {
		printf("登录成功");

	}
	else {
		printf("登录失败");
	}

	
	printf("%d","num2""欢迎进入成绩管理系统");
	int two;
	printf("\n""录入成绩请按2，查询成绩请按3");
	cin >> two;
	if (two == 2) {
		printf("请问您录入成绩的个数：");
		cin >> numofstudent;


	}



	
	





	return 0;

}