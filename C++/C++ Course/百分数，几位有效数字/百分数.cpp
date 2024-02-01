#include<bits/stdc++.h>
//竞赛万能头文件
using namespace std;
int main()
{
	int tot,a;//总数total缩写tot，a占比
	cin>>tot>>a;
	//fixed令小数点前数字都输出
	//setprecision(n)保留小数点后n位小数
	//100.0*整形a的结果为实型，/tot后得到的才为实型
	cout<<fixed<<setprecision(5)<<100.0*a/tot<<'%'<<endl;
	system("pause");
	return 0;
}