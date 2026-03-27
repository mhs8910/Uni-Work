#include<iostream>
using namespace std;
main()
{
    int numberofstudents;
    string studentnames[100];

    cout<<"Enter the number of students you want to add : ";
    cin>>numberofstudents;

    cout<<"Enter the names of the students : "<<endl;\
    for (int i = 0; i < numberofstudents; i++)
    {
        cin>>studentnames[i];
    }

    cout<<"The students added are : "<<endl;
    
    for (int i = 0; i < numberofstudents; i++)
    {
        cout<<studentnames[i]<<endl;
    }
    

}