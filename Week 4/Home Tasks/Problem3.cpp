#include<iostream>
using namespace std;
main()
{
    int temp1, temp2, diff;

    cout<<"Enter the temperature of city which is greater : ";
    cin>>temp1;

    cout<<"Enter the temperature of the second city : ";
    cin>>temp2;

    diff=temp1-temp2;

    if(diff>10)
    {
        cout<<"The difference is large.";
    }
}