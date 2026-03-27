#include<iostream>
using namespace std;
main()
{
    int n;
    string ProductNames[100];
    float prices[100];
    int quantity[100];

    cout<<"Enter the number of products : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Names of the product "<<i+1<<" : ";
    
        cin>>ProductNames[i];
    
        cout<<"Enter the Price of "<<ProductNames[i]<<" : ";
        
        cin>>prices[i];

        cout<<"Enter the Quantity of "<<ProductNames[i]<<" : ";
        
        cin>>quantity[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        float TotalValue=prices[i]*quantity[i];
        cout<<ProductNames[i]<<" : "<<prices[i]<<", "<<quantity[i]<<" in stock, Total Value : $"<<TotalValue<<endl;
    }
    
}