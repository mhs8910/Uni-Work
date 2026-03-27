#include<iostream>
using namespace std;
main()
{
    int n;
    string FlightNumber[100];
    string destinations[100];
    int seatsavailable[100];

    cout<<"Enter the number of Flights : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Flight Number of Flight "<<i+1<<" : ";
    
        cin>>FlightNumber[i];
    
        cout<<"Enter the destination of Flight "<<FlightNumber[i]<<" : ";
        
        cin>>destinations[i];

        cout<<"Enter the seats available for Flight "<<FlightNumber[i]<<" : ";
        
        cin>>seatsavailable[i];
    }
    
    cout<<"Flight Information"<<endl;
    cout<<"------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (seatsavailable[i]<5)
        {
            cout<<"Flight "<<FlightNumber[i]<<" to "<<destinations[i]<<" has "<<seatsavailable[i]<<" seats available."<<endl;
        }
        
    }
    
}