#include<iostream>
using namespace std;
main()
{
    string actualpassword="mhs8910", givenpassword;
    
    cout<<"Enter the password : ";
    cin>>givenpassword;

    if(givenpassword==actualpassword)
    {
        cout<<"Password is correct";
    }
    else
    {
        cout<<"Password is incorrect";
    }
}