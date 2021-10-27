#include <iostream>
using namespace std;
 
int main()
{
   char X;
   cout<<"Enter a character:";
   cin>>X;
   if (X >= 'A' && X <= 'Z')
   {
      X=X+32;
      cout << "Converted character to lowercase:" << X;
   }
   return 0;
}