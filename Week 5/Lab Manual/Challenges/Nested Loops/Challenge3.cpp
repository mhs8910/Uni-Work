#include<iostream>
using namespace std;
main()
{
    cout<<"---------------------------------------"<<endl;
    cout<<"---------ATM Management System---------"<<endl;
    cout<<"---------------------------------------"<<endl;

    int pin, input, bankballance=1000, depositedmoney, withdrawmoney;
    for(int x=0;x<3;x++)
    {
        cout<<"Enter your PIN : ";
        cin>>pin;
        cout<<endl;

        if(pin==1234)
        {
            cout<<"Login Successful"<<endl;
            break;
        }
        else
        {
            cout<<"Try Again"<<endl;
        }
        if(x==2 && !(pin==1234))
        {
            cout<<"Too many Invalid Attempts"<<endl;
            return 0;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"1-Check Balance"<<endl;
        cout<<"2-Deposit Money"<<endl;
        cout<<"3-Withdraw Money"<<endl;
        cout<<"4-Exit"<<endl;

        cout<<"Enter your input : ";
        cin>>input;

        if (input==1)
        {
            cout<<"The bank balance is : "<<bankballance<<endl<<endl;
        }
        else if(input==2)
        {
            cout<<"Enter the amount of money you want to deposit : ";
            cin>>depositedmoney;
            bankballance=bankballance+depositedmoney;
            cout<<"The current balance is after deposit is : "<<bankballance<<endl<<endl;
        }
        else if(input==3)
        {
            cout<<"Enter the amount of money you want to withdraw : ";
            cin>>withdrawmoney;
            if (withdrawmoney>bankballance)
            {
                cout<<"Insufficient amount of balance"<<endl<<endl;
            }
            else
            {
                cout<<"Withdraw Successful"<<endl;
            }
            bankballance=bankballance-withdrawmoney;
            cout<<"The ballance after withdraw is : "<<bankballance<<endl<<endl;
            
        }
        else if (input==4)
        {
            break;
            return 0;
        }
        else
        {
            cout<<"Invalid Entry. Try again"<<endl<<endl;
        }
        
    }
}