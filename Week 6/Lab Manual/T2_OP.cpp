#include<iostream>
using namespace std;
main()
{
    string word;

    cout<<"Enter any word : ";
    cin>>word;

    for (int i = word.length(); i >= 0; i--)
    {
        cout<<word[i];
    }
    
}