#include<iostream>
using namespace std;
main()
{
    string name;
    int priceadult, pricechild, adulttickets, childtickets, moneytodonate, moneyearned, donatedmoney, remainingmoney;

    cout<<"Enter the name of the movie : ";
    cin>>name;

    cout<<"Enter the price of an adult ticket : ";
    cin>>priceadult;

    cout<<"Enter the price of a child ticket : ";
    cin>>pricechild;

    cout<<"Enter the total amount of adult tickets sold : ";
    cin>>adulttickets;

    cout<<"Enter the total amount of children tickets sold : ";
    cin>>childtickets;

    cout<<"Enter the percentage of money to be donated to charity : ";
    cin>>moneytodonate;
    
    moneyearned=(priceadult*adulttickets)+(pricechild*childtickets);
    donatedmoney=(moneytodonate/100)*moneyearned;
    remainingmoney=moneyearned-donatedmoney;

    cout<<"The remaining money after charity is : "<<remainingmoney;
}