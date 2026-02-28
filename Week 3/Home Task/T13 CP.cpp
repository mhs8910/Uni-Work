#include<iostream>
using namespace std;
main()
{
    int n1, n2;

    cout<<"Enter 5 numbers : ";
    cin>>n1;

    cin>>n2;
    n1=n1+n2;

    cin>>n2;
    n2=n1+n2;

    cin>>n1;
    n1=n1+n2;

    cin>>n2;
    n2=n1+n2;

    cout<<"The sum of these numbers is : "<<n2;


}