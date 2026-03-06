#include<iostream>
using namespace std;
main()
{
    int n, sum;

    cout<<"Enter the number of sides of polygon (should be greater than 3) : ";
    cin>>n;

    sum=(n-2)*180;

    cout<<"The sum of the internal angles of the polygon is : "<<sum;
}