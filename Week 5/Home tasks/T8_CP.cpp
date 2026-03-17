#include<iostream>
using namespace std;
main()
{
    int age, priceofmachine, unitprice, money=0, gift=0, toysmoney, savedmoney;

    for (int x = 0; x <=5; x++)
    {
        cout<<"Enter lilly's age : ";
    cin>>age;
    
    cout<<"Enter unit toy price : ";
    cin>>unitprice;

    cout<<"Enter Price of the washing machine : ";
    cin>>priceofmachine;

    if (0<age<=7 && 0<unitprice<=40 && 0<priceofmachine<=10000)
    {
        for (int i = 0; i <=age; i++)
    {
        if(age%2==0)
        {
            money=money+10;
            money=money-1;
        }
        if (age%2 != 0)
        {
            gift=gift+1;
        }

    }

    toysmoney=gift*unitprice;
    savedmoney=toysmoney+money;

    if(savedmoney>=priceofmachine)
    {
        cout<<"Yes! you can buy washing machine."<<endl<<"remaining moneyy after bying washing machine is : "<<savedmoney-priceofmachine;
    }
    else
    {
         cout<<"No! you can not buy washing machine."<<endl<<"remaining money for bying washing machine is : "<<priceofmachine-savedmoney;
    }
    break;
    }
    else
    {
        cout<<"Try giving a valid Value";
    }

    if (x==5 && (0<age<=7 && 0<unitprice<=40 && 0<priceofmachine<=10000))
    {
        cout<<endl<<"Too many attempts";
    }
    

    }
        
}