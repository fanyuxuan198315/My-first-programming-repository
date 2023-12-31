#include <bits/stdc++.h>
using namespace std;
int main(){
	//空指针和野指针
	int *p=NULL;//作用：初始化指针变量
//	int *p2=(int *)0x 1100;	//指向了非法内存空间的指针
	cout<<*p<<endl;//什么也没有
//	cout<<*p2<<endl;//报错
	system("pause");
	return 0;
}