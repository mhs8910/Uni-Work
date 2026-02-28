#include<iostream>
using namespace std;
main()
{
    int n, age, average;

    cout<<"Enter your age : ";
    cin>>age;

    cout<<"Enter the number of times you moved : ";
    cin>>n;

    average=age/(n+1);

    cout<<"The average time you spent in one house : "<<average;
}