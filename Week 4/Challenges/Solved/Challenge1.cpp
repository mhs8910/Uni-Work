#include<iostream>
using namespace std;
main()
{
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    if(number%2==0)
    {
        cout<<"The given number is even";
    }
    else
    {   
        cout<<"The given number is odd";
    }
}