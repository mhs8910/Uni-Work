#include<iostream>
#include<conio.h>
using namespace std;

bool symtericalnumber(int num)
{
    int temp=num;
    int rev=0;
    while(temp!=0)
    {
        int rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

main()
{
    int number=0;
    cout<<"Enter a number : ";
    cin>>number;
    if(symtericalnumber(number))
    {
        cout<<"Symterical number";
    }
    else
    {
        cout<<"Not a symterical number";
    }
}