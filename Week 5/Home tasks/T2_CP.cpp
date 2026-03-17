#include<iostream>
using namespace std;
main()
{
    int n1=0, n2=1, n, next;
    cout<<"Enter the length of fibonacci sequence you want to print : ";
    cin>>n;

     cout<<n1<<","<<n2;
     
    for (int i = 0; i <=n-1; i=i+1)
    {

        next=n1+n2;
        cout<<","<<next;
        n1=n2;
        n2=next;
    }
    
}