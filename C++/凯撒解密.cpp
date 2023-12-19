#include <stdio.h> 
#include <stdlib.h>
 
#define MAX 100
#define YIWEI 3
 
int main()
{
    char C[MAX];
    char M[MAX];
    int K=YIWEI,i;
    //解密
    printf("请输入密文C(不可输入空白串)\n");
    gets(C);
    for(i=0; C[i]!='\0'; i++)
    {
         M[i]=(C[i]-'a'-K)%26+'a';
    }
    M[i]='\0';
    printf("解密后的明文是:\n%s\n",M);
    return 0;
}