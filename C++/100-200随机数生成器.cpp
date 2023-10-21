#include <iostream>
using namespace std;int main()
{
 int n = 0;
 for(int i = 100 ; i <= 200 ; i++)
 {
  if(i%7==0)
  {
   cout << i <<" ";
   n++;
   if(n % 5 == 0)
   {  
    cout<<endl;   
   }
  }  
 }
 cout << endl;
 return 0;
}
