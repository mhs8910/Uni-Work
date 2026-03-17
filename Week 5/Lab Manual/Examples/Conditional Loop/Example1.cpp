#include<iostream>
using namespace std;
main()
{
    char ch='y';
    while (ch=='y')
    {
        cout<<"I am happy"<<endl;
        cout<<"Press y to continue or press any key to exit : ";
        cin>>ch;
    }
    
}