#include<iostream>
using namespace std;
main()
{
    int rows;

    cout<<"Enter the number of rows : ";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int x=1;x<=i;x++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}