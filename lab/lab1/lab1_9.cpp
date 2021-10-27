#include<iostream>
using namespace std;
int main()
{
	int income;
    float tax;
    int total;
	cout << "Enter income: ";
	cin >> income;
    if(income > 4000000)
    {
        tax = 0.37;
        total = income * tax;
    }
    else if(income > 1000000)
    {
        tax = 0.30;
        total = income * tax;
    }
    else if(income > 500000)
    {
        tax = 0.20;
        total = income * tax;
    }
    else if(income > 100000)
    {
        tax = 0.10;
        total = income * tax;
    }
    else
	{
        tax = 0.05;
        total = income * tax;
    }
    cout << total << endl;
	return(0);
}