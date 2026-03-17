#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter a positive Number : ";
    cin>>n;

    while (n<0)
    {
        cout<<"Please Enter a positive Number : ";
        cin>>n;
    }
    
}