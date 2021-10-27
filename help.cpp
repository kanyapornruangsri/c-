#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i = 10;
    int j = 2;
    int sum = i + 2 * j++;
    cout << sum << endl;
    return(0);
 }