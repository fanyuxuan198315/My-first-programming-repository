#include<iostream>
using namespace std;
int main()
{
	int num1=2;//一个 = 是赋值运算符，就是给一个量赋值
	int num2=3;
	int flag=1;
	//比较运算符
	flag=(num1==num2);//两个 == 是比较运算符，就是看想不想等，若相等则结果是1，否则是0
	cout<<flag<<endl;//因为num1不等于num2，所以flag输出为0
	
	flag=(num1>num2);//  >  大于号，因为num1小于num2,所以flag值还是0
	cout<<flag<<endl;
	
	flag=(num1<num2);//  <  小于号，因为num1小于num2,所以flag值为1
	cout<<flag<<endl;
	
	flag=(num1!=num2);//  !=  不等于号，因为num1不等于num2,所以flag值是1
	cout<<flag<<endl;
	
	flag=(num1>=num2);//  >=  大于等于号，因为num1小于num2,所以flag值是0
	cout<<flag<<endl;
	
	flag=(num1<=num2);//  <=  小于等于号，因为num1小于num2,所以flag值是1
	cout<<flag<<endl;
	
	
	//逻辑运算符，！非    &&与    ||或，与或非的含义之前讲过。
	flag=(num1&&num2);//  两真则真
	cout<<flag<<endl;
	
	flag=(num1||num2);//  一真则真，一假则假
	cout<<flag<<endl;
	
	flag=(!num1);//  !2=0
	cout<<flag<<endl;
	
	system("pause");//自己掌握后，做好笔记，手打几遍，做到能熟练编程！！！
	return 0;	
}
