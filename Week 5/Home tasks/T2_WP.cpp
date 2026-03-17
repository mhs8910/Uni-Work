#include<iostream>
using namespace std;
main()
{
    int num=0, sum;
    while (num >=0)
    {
        sum=sum+num;
        cout<<"Enter any number : ";
        cin>>num;
    }
    cout<<"Sum : "<<sum;
    
}