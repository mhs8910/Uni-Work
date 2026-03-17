#include<iostream>
using namespace std;
main()
{
    int n,count=0;

    cout<<"Enter a number : ";
    cin>>n;

    for(int i=n;i>0;i=i/10)
    {
        count=count+1;
    }
    cout<<"The number of digits in the number are : "<<count;
}