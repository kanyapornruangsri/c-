#include <iostream>
using namespace std;
int main()
{
    int D, M, Y, Ans = 0;

    cout << " Please enter day : ";
    cin >> D;
    for (int D = 0; D >= 1 && D <= 30;)
    {
        Ans += D;
    }

    cout << " Please enter month : ";
    cin >> M;
    for (int M = 0; M >= 1 && M <= 12;)
    {
        Ans += M * 30;
    }

    cout << " Please enter year : ";
    cin >> Y;
    for (int Y = 0; Y >= 2513 && Y <= 2599;)
    {
        Ans += (Y - 2513) * 360;
    }
    Ans = ((Y - 2513) * 360) + ((M - 1) * 30) + D - 1;
    cout << " The difference is about " << Ans << " days." << endl;
    return (0);
}