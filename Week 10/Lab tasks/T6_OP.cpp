#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int myFunction(int number);

main()
{
    int number, result;
    cout<<"Enter Number : ";
    cin>>number;

    result = myFunction(number);

    cout<<"The result is : "<<result;
}
int myFunction(int number)
{
    int total = number*5;
    return total;
}