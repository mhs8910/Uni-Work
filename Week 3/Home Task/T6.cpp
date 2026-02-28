#include<iostream>
using namespace std;
main()
{
    int weight, cost, size; 
    float priceperpound, pricepersquare;

    cout<<"Enter the wieght of the bag of fertilizer :";
    cin>>weight;

    cout<<"Enter the cost of the fertilizer bag : ";
    cin>>cost;

    cout<<"Enter the size of the area the bag can cover : ";
    cin>>size;

    priceperpound=cost/weight;
    pricepersquare=cost/size;

    cout<<"\n\nThe price of the fertilizer for each pound is : "<<priceperpound;
    cout<<"\nThe price of the fertilizer for each square foot of the garden is : "<<pricepersquare;

}