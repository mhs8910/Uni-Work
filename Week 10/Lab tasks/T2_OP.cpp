#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int number1, number2;
    cout<<"Enter a Number: ";
    cin>>number1;

    cout<<"Enter its exponent : ";
    cin>>number2;

    cout<<number1<<" raised to power "<<number2<<" is : "<<pow(number1, number2)<<endl;
}