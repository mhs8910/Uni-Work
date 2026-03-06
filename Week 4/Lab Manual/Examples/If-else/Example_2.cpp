#include<iostream>
using namespace std;
main()
{
    string going;
    cout<<"Are your friends going to university  (Press Y for Yes and N for No) : ";
    cin>>going;

    if(going=="Y")
    {
        cout<<"You are also going";
    }
    else
    {
        cout<<"You are not going";
    }
}