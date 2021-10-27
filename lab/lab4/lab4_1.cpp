#include <iostream>
using namespace std;
int main()
{
    int interest, month, rate;
    float dep, in, outcome, all;
    cout << "Input interest: ";
    cin >> interest;
    cout << "Input number of month: ";
    cin >> month;
    cout << "Input interest rate: ";
    cin >> rate;
    dep = interest;
    for (int i = 1; i <= month; i++)
    {
        in = dep * rate / 100;
        outcome = dep + in;
        dep = outcome;
        cout << "#" << i;
        cout << " dep. = " << dep;
        cout << " in. = " << in;
        cout << " outcome = " << outcome << endl;
    }
    all = dep - interest;
    cout << "all of interest = " << all << endl;
    return(0);
    
    
}