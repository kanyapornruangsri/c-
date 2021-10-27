#include <iostream>
#include <string>
using namespace std;
int main()
{
    int student = 5;
    
    for (int i = 1; i <= student; i++)
    {
        string firstname;
        string surname;
        int attendance[i];
        int homework[i];
        int quiz[i];
        int midexam[i];
        int finalexam[i];
        int sum[i];
        char grade[i];

        cout << "Input firstname: ";
        cin >> firstname;
        cout << "Input surname: ";
        cin >> surname;

        do {
            cout << "Input attendance: ";
            cin >> attendance[i];
        } while (attendance[i] < 0 || attendance[i] > 5);
        
        do {
            cout << "Input homework: ";
            cin >> homework[i];
        } while (homework[i] < 0 || homework[i] > 15);

        do {
            cout << "Input quiz: ";
            cin >> quiz[i];
        } while (quiz[i] < 0 || quiz[i] > 10);

        do {
            cout << "Input midexam: ";
            cin >> midexam[i];
        } while (midexam[i] < 0 || midexam[i] > 30);

        do {
            cout << "Input finalexam: ";
            cin >> finalexam[i];
        } while (finalexam[i] < 0 || finalexam[i] > 30);        

        sum[i] = attendance[i] + homework[i] + quiz[i] + midexam[i] + finalexam[i];

        if(sum[i] >= 80)
            grade[i] = 'A';
        else if(sum[i] >= 70)
            grade[i] = 'B';
        else if(sum[i] >= 60)
            grade[i] = 'C';
        else if(sum[i] >= 50)
            grade[i] = 'D';
        else
            grade[i] = 'E';

        cout << firstname << " " << surname << endl;
        cout << grade[i] << endl;
    }
    return(0);
}