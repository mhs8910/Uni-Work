#include<iostream>
using namespace std;
main()
{
    cout<<"---------------------------------------------"<<endl;
    cout<<"----------Library Management System----------"<<endl;
    cout<<"---------------------------------------------"<<endl;

    int choice=0, n=0;
    string books[100];

    cout<<"1-Add Books"<<endl;
    cout<<"2-View Books"<<endl;
    cout<<"3-Borrow Books"<<endl;
    cout<<"4-exit"<<endl;
    for (int i = 0; i <=5; i++)
    {
        cout<<"Enter your choice : ";
        cin>>choice;

        if (choice==1)
        {
            cout<<"Enter the number of books you want to add : ";
            cin>>n;
            
            cout<<"Enter the names of the books : ";
            for (int i = 0; i < n; i++)
            {
                cin>>books[i];
            }
            cout<<"Books successfully added";
        }
        else if (choice==2)
        {
            cout<<"Here are the books : "<<endl;

            for (int i = 0; i < n; i++)
            {
                cout<<i+1<<"-"<<books[i]<<endl;
            }
        }
        else if (choice==3)
        {   
            int borrowbook;
            cout<<"Select the book you want to borrow : "<<endl;

            for (int i = 0; i < n; i++)
            {
                cout<<i+1<<"-"<<books[i]<<endl;
            }
            
            cout<<"Book Number : ";
            cin>>borrowbook;

            cout<<"Book successfully borrowed.";
        }
        else if (choice==4)
        {
            cout<<"You chose exit. Program Terminated";
            return 0;
        }
        else
        {
            cout<<"Please Enter a Valid Choice and try again.";
            break;
        }    
    }
} 