#include <stdio.h>
 
#define MAX 100
#define YIWEI 3
 
int main()
{
    char C[MAX];
    char M[MAX];
    int K=YIWEI,i;
    //加密
    printf("请输入明文M(不可输入空白串)\n");
    gets(M);
    for(i=0; M[i]!='\0'; i++)
        C[i]=(M[i]-'a'+K)%26+'a';
    C[i]='\0';
    printf("加密后的密文是:\n%s\n",C);
    return 0;
}
