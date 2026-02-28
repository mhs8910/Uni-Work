#include<iostream>
using namespace std;
main()
{
    float vegetableprice, fruitprice, totalvegetable, totalfruit, totalearnings;

    cout<<"Enter the vegetable price per kilogram : ";
    cin>>vegetableprice;

    cout<<"Enter the fruit price per kliogram : ";
    cin>>fruitprice;

    cout<<"Enter the total number of kgs of vegetables sold : ";
    cin>>totalvegetable;

    cout<<"Enter the total number of kgs of fruits sold : ";
    cin>>totalfruit;

    totalearnings=((vegetableprice*totalvegetable)+(fruitprice*totalfruit))/1.94;

    cout<<"The total earnings of both fruits and vegetables in pkr are : "<<totalearnings;
}