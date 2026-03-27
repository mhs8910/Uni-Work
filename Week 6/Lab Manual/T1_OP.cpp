#include<iostream>
using namespace std;
void location(string word)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout<<word[i]<<" lies at array["<<i<<"]"<<endl;
    }
    
}
main()
{
    string word;

    cout<<"Enter the word : ";
    cin>>word;

    location(word);
}
