#include<iostream>
using namespace std;
int main()
{
    int book,toy,model,stationery;
    int sell;
    float com = 1000;
    float bonus;
    float payment;
    cout << "Input number of Books: ";
    cin >> book;
    cout << "Input Number of Toys: ";
    cin >> toy;
    cout << "Input Number of Model: ";
    cin >> model;
    cout << "Input Number of Stationery: ";
    cin >> stationery;
    book = book * 120;
    toy = toy * 80;
    model = model * 50;
    stationery = stationery * 15;
    sell =  book + toy + model + stationery;
    if(sell >= 100000)
    {
        bonus = 0.1;
        payment = com + (sell * bonus);
    }
    else if(sell >= 10000)
    {
        bonus = 0.05;
        payment = com + (sell * bonus);
    }
    else if(sell >= 5000)
    {
        payment = com + sell;
    }
    else if(sell >= 1)
    {
        bonus = 0.1;
        com = com - (com * bonus);
        payment = sell + com;
    }
    else
    {
        bonus = 0.5;
        payment = com * bonus;
    }
    cout << "Payment = " << payment << endl;
    return(0);
}