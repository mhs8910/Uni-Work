#include<iostream>
using namespace std;
main()
{
    string countryname;
    int ticketprice, discountedprice;

    cout<<"Enter the name of the country : ";
    cin>>countryname;

    cout<<"Enter the ticket price : ";
    cin>>ticketprice;

    if(countryname=="Ireland")
    {
        discountedprice=ticketprice-(0.1*ticketprice); 
    }
    else
    {
        discountedprice=ticketprice-(0.05*ticketprice);
    }

    cout<<"Discounted Price : "<<discountedprice;
}
