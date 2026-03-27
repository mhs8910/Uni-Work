#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;

    cout<<"Enter a word : ";
    cin>>word;

    cout<<"Enter the letter you want to find in "<<word<<" : ";
    cin>>letter;

    for (int i = 0; i<word.length(); i++)
    {
        if (word[i]==letter)
        {
            cout<<letter<<" is found in "<<word;
        }
    }
    if ()
    {
        /* code */
    }
       
}
