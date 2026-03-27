#include<iostream>
using namespace std;
main()
{
    string name;
    char letter;
    cout<<"Enter a name : ";
    cin>>name;

    for (int i = 0; i < name.length(); i++)
    {
        char nextletter=name[i]+1;
        cout<<nextletter;    
    }
    
}