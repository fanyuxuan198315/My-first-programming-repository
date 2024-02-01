#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	float f;
	double d;
	char c;
	scanf("%c%d%f%lf",&c,&i,&f,&d);//把字符放在前头，不然默认识别为输入的空格然后直接输出了
	printf("%c  %d  %.6f  %.6lf",c,i,f,d);
	system("pause");
	return 0;
}