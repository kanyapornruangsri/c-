#include<iostream>
using namespace std;
int main()
{
	int score;
    int grade;
	cout << "Enter the number of score : ";
	cin >> score;
    if(score >= 80)
    {
        cout << "A";
    }
    else if(score >= 70)
    {
        cout << "B";
    }
    else if(score >= 60)
    {
        cout << "C";
    }
    else if(score >= 60)
    {
        cout << "D";
    }
    else
	{
        cout << "F" << endl;
    }
	return(0);
}