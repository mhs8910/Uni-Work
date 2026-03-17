#include<iostream>
using namespace std;
main()
{
    double expenses=0,money, time, age;
    cout<<"Enter the amount of money : ";
    cin>>money;

    cout<<"Enter the year until you will live in past: ";
    cin>>time;

    

    for (int i = 1800; i <=time; i++)
    {
        age=18+(i-1800);
        if (i%2==0)
        {
            expenses+=12000;
        }
        else
        {
            expenses+=12000+(50*age);
        }
    }

    if (expenses>money)
    {
        cout<<"He will need "<<expenses-money<< "dollars to surive.";
    }
    else
    {
        cout<<"He will live a carefree life and will have "<<money-expenses<<" dollars left";
    }
}