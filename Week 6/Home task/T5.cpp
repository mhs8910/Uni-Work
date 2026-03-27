#include<iostream>
using namespace std;
main()
{
    int n=100, count=0;
    string customers[n];
    char letter;

    cout<<"Enter the amount of customers : ";
    cin>>n;

    cout<<"Enter the names of the customers : ";
    for (int  i = 0; i < n; i++)
    {
        cin>>customers[i];
    }

    cout<<"Enter a letter : ";
    cin>>letter;

    for (int i = 0; i < n; i++)
    {
        if (letter==customers[i][0])
        {
            count=count+1;
        }
        
    }
    
    cout<<letter<<" comes in start of "<<count<<" names.";
}