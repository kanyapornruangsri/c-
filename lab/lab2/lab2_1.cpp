#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    int sum = 1;
    int count = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            if(j%1==0)
            {
                if(i%j==0)
                {
                    count = count + 1;
                }
            }
        }
        if(count==2)
        {
            sum = sum + i;
        }
        count = 0;
    }
    cout << sum << endl;
    return(0);
}