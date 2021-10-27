#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter character: ";
	cin >> ch;
	if(ch >= '0'&& ch <= '9')
		cout << "pass"<< endl;
	else
		cout << "fail"<< endl;
	return(0);
}