#include<iostream>
using namespace std;
int main()
{
    int day, month, year;
    int totalday;
    int difference;
    char error = 'N';
    cout << "Please enter day month and year: ";
    cin >> day >> month >> year;
    if(year > 2599 || year < 2513)
    {
        cout << "Year Error !!! \n";
        error = 'Y';
    }
    if(month > 12 || month < 0)
    {
        cout << "Month Error !!! \n";
        error = 'Y';
    }
    if(day > 30 || day < 0)
    {
        cout << "Day Error !!! \n";
        error = 'Y';
    }

    if(error == 'N')
    {
        totalday = ((((year * 12) + month) * 30) + day);
        if(totalday >= 904711)
        {
            difference = totalday - 904711;
        }
        cout << "The difference is about " << difference << " days."<< endl;
    }
    return(0);
}