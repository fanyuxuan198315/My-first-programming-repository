#include<bits/stdc++.h>
using namespace std;
int n,ans;//ans储存二进制位数，方便输出
vector<int> a;//因为n的范围是1e9，所以我定了一个动态数组
int main(){
cin>>n;
while(n>0){
ans++;//存位数
a.push_back(n%2);//如数组
n/=2;}
for(int i=ans-1;i>=0;i--) cout<<a[i];}//倒序输出