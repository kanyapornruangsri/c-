#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char choice;
    float radius = 0;
    float pi = 3.14;
    cout << "Enter the number of radius : ";
    cin >> radius;
    cout << "1. Calculate the circumference of circle" << endl;
    cout << "2. Calculate the area of circle" << endl;
    cout << "3. Calculate the volume of phere " << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    switch(choice)
    {
        case '1':
            float circum;
            circum = 2.0*pi*radius;
            cout << "Circumference of circle : " << circum << endl;
        break;
        case '2':
            float area;
            area = pi*pow(radius,2);
            cout << "Area of circle : " << area << endl;
        break;
        case '3':
            float volume;
            volume = (4.0/3.0) * pi *pow(radius,3);
            cout << "Volume of circle : " << volume << endl;
        break;
    }
    return(0);
}