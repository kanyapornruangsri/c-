#include<iostream>
using namespace std;
int main()
{
	int fish;
	cout << "Enter fish: ";
	cin >> fish;
	if(fish >= 50)
		cout << "pass"<< endl;
	if(fish < 50)
		cout << "fail"<< endl;
	return(0);
}