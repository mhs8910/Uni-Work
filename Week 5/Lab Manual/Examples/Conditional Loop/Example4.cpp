#include<iostream>
using namespace std;
main()
{
    //using for loop
    int sum;
    for(int x=1;x<=5;x++)
    {
        sum=sum+x;
    }
    cout<<sum<<endl;

    //using while loop
    int x=0;
    sum=0;
    while (x<=5)
    {
        sum=sum+x;
        x=x+1;
    }
    cout<<sum;
}   