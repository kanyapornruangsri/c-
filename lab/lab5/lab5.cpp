#include <iostream>
#include <string>
using namespace std;
int main()
{
    char Ch;
    string Message;
    cout << "Enter character : ";
    cin >> Ch;
    cout << endl;
    if (Ch >= 'a'&& Ch <= 'z')
        Message = "lower character.";
    else if (Ch >= 'A'&& Ch <= 'Z')
        Message = "upper character.";
    else if(Ch >= '0'&& Ch <= '9')
        Message = "digit.";
    else 
        Message = "special character.";
    cout << "\'"<< Ch << "\'"<< " is "<< Message << endl;

    if (Ch >= 'a'&& Ch <= 'z')
    {
            cout <<  "\'"<< Ch << "\'"<< " convert to upper \'";
            Ch = Ch - 32;
            cout << Ch << "\'";
    }
    else if (Ch >= 'A'&& Ch <= 'Z')
    {
            cout <<  "\'"<< Ch << "\'"<< " to lower \'";
            Ch = Ch + 32;
            cout << Ch << "\'";
    }
    cout << endl;
    return(0);
}