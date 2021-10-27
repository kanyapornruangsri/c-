#include<iostream>
using namespace std;
int main()
{
    int project;
    int midterm;
    int final;
    int score;
    char error = 'N';
    char grade;
	cout << "Enter project score : ";
	cin >> project;
    cout << "Enter midterm score : ";
	cin >> midterm;
    cout << "Enter final score : ";
	cin >> final;
    if(project > 20 || project < 0)
    {
        cout << "Project score Error !!! \n";
        char error = 'Y';
    }
    if(midterm > 30 || midterm < 0)
    {
        cout << "Midterm score Error !!! \n";
        char error = 'Y';
    }
    if(final > 50 || final < 0)
    {
        cout << "Final score Error !!! \n";
        char error = 'Y';
    }

    if(error == 'N')
    {
        score = project + midterm + final;
        if(score >= 80)
        {
            grade = 'A';
        }
        else if(score >= 70)
        {
            grade = 'B';
        }
        else if(score >= 60)
        {
            grade = 'C';
        }
        else if(score >= 60)
        {
            grade = 'D';
        }
        else
	    {
            grade = 'F';
        }
    }
    cout << "Total Score: " << score << "\n";
    cout << "Grade: " << grade << endl;
	return(0);
}