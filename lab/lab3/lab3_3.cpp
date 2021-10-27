#include<iostream>
using namespace std;
int main()
{
	int salary;
    char late;
    char ot;
    int othour;
    int bonus = 0;
    cout << "Enter salary : ";
    cin >> salary;
    cout << "Late (Y/N) : ";
    cin >> late;
    cout << "Over time hour (Y/N): ";
    cin >> ot;
    if(late == 'N');
    {
        salary+=1000;
    }
    if(ot == 'Y');
    {
        cout << "Enter OT hour: ";
        cin >> othour;
        for(int i = 1; i <= othour; i++)
        {
            bonus+=200;
        }
    }
    salary+=bonus;
    cout << salary;
}