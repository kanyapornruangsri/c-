#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter score: ";
	cin >> score;
    if ((score >= 0)&&(score <= 100)){
        if(score >= 80)
            cout << "A";
        else if(score >= 70)
            cout << "B";
        else if(score >= 60)
            cout << "C";
        else if(score >= 50)
            cout << "D";
        else if(score < 50)
            cout << "F";
    }
    else
		cout << "error"<< endl;
	return(0);
}