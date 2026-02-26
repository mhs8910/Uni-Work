#include<iostream>
using namespace std;
main()
{
    int V, I, P;

    cout<<"Enter the Voltage : ";
    cin>>V;

    cout<<"Enter the Current : ";
    cin>>I;
    
    P=V/I;

    cout<<"The power is : "<<P;
}