#include <iostream>
using namespace std;
 
int main() 
{
  int num1,num2;

std::cout<<"请输入第一个数字：" ;
std::cin>>num1;

std::cout<<"请输入第二个数字：" ;
std::cin>>num2;

bool areEqual=(num1==num2);

if (areEqual){
std::cout<<"两个数字相等!\n" ;
} else {
std::cout<<"两个数字不相等!\n" ;
}
   

  return 0;
}