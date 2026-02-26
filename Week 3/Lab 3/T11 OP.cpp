#include<iostream>
using namespace std;
main()
{
    int population2, population, n;
    cout<<"Enter the world population now : ";
    cin>>population;

    cout<<"Enter the monthly birth rate : ";
    cin>>n;

    population2=population+(n*30*12);

    cout<<"The population after 3 decades will be : "<<population2;
}