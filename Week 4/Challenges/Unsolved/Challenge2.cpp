#include<iostream>
using namespace std;
main()
{
    int salary=10000, laptop=50000, advance=(0.5*salary)*6, months;
    if(laptop<advance)
    {
        cout<<"Yes, you can buy the laptop";
    }
    else
    {

        months=laptop/(0.5*salary);
        cout<<"The months required to buy the laptop : "<<months; 
    }
}