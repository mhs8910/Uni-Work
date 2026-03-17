#include<iostream>
using namespace std;
main()
{
    int input=0;
    while (input<=6)
    {
        input++;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"----------Restaurent Management System---------"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    
    cout<<"1-View Food menu"<<endl;
    cout<<"2-Place Order"<<endl;
    cout<<"3-View Order Status"<<endl;
    cout<<"4-Generate Bill"<<endl;
    cout<<"5-Contact Staff"<<endl;
    cout<<"6-Exit"<<endl;

    cout<<"Enter your choice : "<<endl;
    cin>>input;

    if (input==1)
    {
        cout<<"You selected : View Food menu";
    }
    else if (input==2)
    {
        cout<<"You selected : Place Order";
    }
    else if (input==3)
    {
        cout<<"You selected : View Order Status";
    }
    else if (input==4)
    {
        cout<<"You selected : Generated Bill";
    }
    else if (input==5)
    {
        cout<<"You selected : Contact Staff";
    }
    else if (input==6)
    {
        cout<<"You selected : Exit";
        break;
    }
    }
    
}