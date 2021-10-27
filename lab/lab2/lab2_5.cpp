#include<iostream>
using namespace std;
int main()
{   
    int i;
     
    for(i=1; i<=100; i++)
    {
         
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
            && (i!=2 && i!=3 && i!=5 && i!=7)){
            continue;
        }
 
        cout << "\t" << i;     
    }
     
    cout << "\n\n" << endl;
     
    return(0);
}