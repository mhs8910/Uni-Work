#include<iostream>
using namespace std;
main()
{
    int price[4];
    float amountdue;
    
    cout<<"Enter the quarters : ";
    cin>>price[0];

    cout<<"Enter the dimes : ";
    cin>>price[1];

    cout<<"Enter the nickel : ";
    cin>>price[2];

    cout<<"Enter the quarters : ";
    cin>>price[3];

    cout<<"Enter the total amount due : ";
    cin>>amountdue;
    
    float priceindollars=(price[0]*0.25)+(price[1]*0.10)+(price[2]*0.5)+(price[3]*0.01);

    if (priceindollars>amountdue)
    {
        cout<<"Can you pay the amount? Yes";
    }
    else
    {
       cout<<"Can you pay the amount? No";

    }
}