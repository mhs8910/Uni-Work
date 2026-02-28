#include<iostream>
using namespace std;
main()
{
    int i, a, t, f;

    cout<<"Enter the initial velocity of the body : ";
    cin>>i;

    cout<<"Enter the acceleration of the body : ";
    cin>>a;

    cout<<"Enter the time taken by the body : ";
    cin>>t;

    f=i+(a*t);

    cout<<"The final velocity of the body is : "<<f ;
}