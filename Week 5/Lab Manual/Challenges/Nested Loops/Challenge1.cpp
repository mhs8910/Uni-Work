#include<iostream>
using namespace std;
main()
{
    int rows, x;

    cout<<"Enter the number of rows : ";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for( x=1;x<=i;x++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=x;i>=rows;i=i-1)
    {
        for(int x=i;x>=rows;x=x-1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}