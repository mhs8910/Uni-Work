#include<iostream>
using namespace std;
main()
{
    int input=0;
    string bookname;
    while (input<=5)
    {
        input++;
    cout<<"--------------------------------------------"<<endl;
    cout<<"----------Library Management System---------"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    cout<<"1-Add book"<<endl;
    cout<<"2-View Book"<<endl;
    cout<<"3-Borrow Book"<<endl;
    cout<<"4-Issue Book"<<endl;
    cout<<"5-Exit"<<endl;

    cout<<"Enter your choice : "<<endl;
    cin>>input;

    if (input==1)
    {
        cout<<"Enter the name of the book you want to add : " ;
        cin>>bookname;
        cout<<bookname<<" Book added";
    }
    else if (input==2)
    {
        cout<<"Enter the name of the book you want to view";
        cin>>bookname;
    }
    else if (input==3)
    {
        cout<<"Enter the name of the book you want to Borrow";
        cin>>bookname;
    }
    else if (input==4)
    {
        cout<<"Enter the name of the book you want to issue";
        cin>>bookname;
    }
    else if (input==5)
    {
        cout<<"You selected exit";
        break;
    }
    }
    
}