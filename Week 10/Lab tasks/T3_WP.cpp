#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int number1, number2;
    cout<<"Enter Number 1 : ";
    cin>>number1;

    cout<<"Enter Number 2 : ";
    cin>>number2;

    int maxnumber=max(number1, number2);

    cout<<"The maximum number between "<<number1<<" and "<<number2<<" is : "<<maxnumber<<endl;
}
