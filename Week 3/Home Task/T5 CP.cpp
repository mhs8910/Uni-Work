#include <iostream>
using namespace std;
int main()
{
    string name;
    int days, weight;

    cout<<"Enter your name Please : ";
    cin>>name;

    cout<<"Enter target weight you want to lose : ";
    cin>>weight;

    days=weight*15;

    cout<<"The number of days to loose this much weight will be "<<days<<".";
}