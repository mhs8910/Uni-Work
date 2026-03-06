#include<iostream>
using namespace std;
main()
{
    int n1, n2; 
    string oper;
    int result;

    cout<<"Enter the first Number : ";
    cin>>n1;

    cout<<"Enter the operator : ";
    cin>>oper;

    cout<<"Enter the second Number : ";
    cin>>n2;

    if(oper=="+")
    {
        result=n1-n2;
        oper="-";
    }
    if(oper=="-")
    {
        result=n1+n2;
        oper="+";
    }
    if(oper=="*")
    {
        result=n1/n2;
        oper="/";
    }
    if(oper=="/")
    {
        result=n1*n2;
        oper="*";
    }
    cout<<n1<<oper<<n2<<"="<<result; 
}