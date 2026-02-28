#include<iostream>
using namespace std;
main()
{
    int n1, n2, n3, n4;
    int n5, n6, n7, n8, n9;
    int n10, n11, n12, n13, n14, n15;
    int add, mul, sub, total;

    cout<<"Enter 15 numbers (one at a time)\n";
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    cin>>n5;
    cin>>n6;
    cin>>n7;
    cin>>n8;
    cin>>n9;
    cin>>n10;
    cin>>n11;
    cin>>n12;
    cin>>n13;
    cin>>n14;
    cin>>n15;
    
    add=n1+n2+n3+n4+n5;
    mul=n6+n7+n8+n9+n10;
    sub=n11+n12+n13+n14+n15;

    total=add+mul-sub;

    cout<<"The result is : "<<total;
}