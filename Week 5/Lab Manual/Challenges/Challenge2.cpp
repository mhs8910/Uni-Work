#include<iostream>
using namespace std;
main()
{
    int digit, number, freq=0;

    cout<<"Enter the digit : ";
    cin>>digit;

    cout<<"Enter the number : ";
    cin>>number;

    for(int x=number;x>0;x=x/10)
    {
        int rem=x%10;
        if (rem==digit)
        {
            freq=freq+1;
        }
        
    }
    cout<<"The frequency of "<<digit<<" in "<<number<<" is "<<freq;
}