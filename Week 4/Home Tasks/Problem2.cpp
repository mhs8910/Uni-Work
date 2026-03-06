#include<iostream>
using namespace std;
main()
{
    int speed, limit=100;

    cout<<"Enter the speed in kmh : ";
    cin>>speed;

    if(speed>limit)
    {
        cout<<"You will be challaned";
    }
    else
    {
        cout<<"You are doing good";
    }
}