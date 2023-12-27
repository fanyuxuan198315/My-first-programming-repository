#include<cstdio>
#include<iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e,n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		b=a%10;
		c=a%100/10;
		e=a/1000;
		if((b-c-d-e)>0)
		sum =sum+1;
	}
	printf("%d",sum);
}


