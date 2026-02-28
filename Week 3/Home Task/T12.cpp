#include<iostream>
using namespace std;
main()
{
    int n, w, h, walls;

    cout<<"Enter the square meters you can paint : ";
    cin>>n;

    cout<<"ENter the width of the wall : ";
    cin>>w;

    cout<<"Enter the height of the wall : ";
    cin>>h;

    walls=n/(w*h);

    cout<<"The number of walls you can paint is : "<<walls;
    
}