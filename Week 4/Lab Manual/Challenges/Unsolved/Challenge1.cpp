#include<iostream>
using namespace std;
main()
{
    int price, discounted;

    cout<<"Enter the price of the product : ";
    cin>>price;

    if(price<=5000)
    {
        discounted=price-(0.05*price);
    }
    else
    {
        discounted=price-(0.1*price);
    }
    cout<<"The discounted price is : "<<discounted;
}