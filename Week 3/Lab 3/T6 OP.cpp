#include<iostream>
using namespace std;
main()
{
    int mbs, bits;

    cout<<"Enter the amont of data in mbs : ";
    cin>>mbs;

    bits=mbs*1024*1024*8;

    cout<<"The amout of data in bits is : "<<bits;
}