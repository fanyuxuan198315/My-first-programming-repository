#include<bits/stdc++.h>
using namespace std;
int main(){
	//指针：就相当于地址。一种数据类型
	int a=10;
	int *p;//pointer
	p=&a;//&取地址
	//6 7可简化为int *p=&a;
	*p=20;//用地址
	cout<<"a= "<<a<<endl;
	
	system("pause");
	return 0;
}
//指针变量是p不是*p