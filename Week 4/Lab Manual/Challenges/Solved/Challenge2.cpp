#include<iostream>
using namespace std;
main()
{
    int n1, n2;

    cout<<"Enter first Number : ";
    cin>>n1;
    cout<<"Enter second Number : ";
    cin>>n2;

    if(n1>n2)
    {
        cout<<"The larger number is : "<<n1;
    }
    else
    {
        cout<<"The larger number is : "<<n2;
    }
}