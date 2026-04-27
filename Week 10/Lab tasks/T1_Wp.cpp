#include<iostream>
using namespace std;

void add(int number1, int number2);

main()
{
    int number1, number2;
    cout<<"Enter Number 1 : ";
    cin>>number1;

    cout<<"Enter Number 2 : ";
    cin>>number2;

    add(number1, number2);
}

void add(int number1, int number2)
{
    int sum = number1 + number2;
    cout<<"The sum of "<<number1<<" and "<<number2<<" is : "<<sum<<endl;
}