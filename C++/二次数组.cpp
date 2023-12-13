#include <bits/stdc++.h> //信息班用的万能库
using namespace std;
int main(){
int i,j; 
 int arr[3][3];
//输入
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<3;j++)
 {
 cin>>arr[i][j];
 }
 }
//输出
 cout<<"三个人成绩如下:"<<endl;
//求和
 for(int i=0;i<3;i++)
 {
 int sum=0; //和
 for(int j=0;j<3;j++)
 {
 sum+=arr[i][j]; //sum=sum=arr[i][j]
 }
 cout<<sum<<endl;
 }
 system("pause"); //信息班用的万能结尾
 return 0;
 }
