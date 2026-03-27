#include<iostream>
using namespace std;
bool specialarray(int n, int number[100])
{
    for (int i = 0; i <= number[n-1]; i++)
    {
        if (i%2==number[i]%2)
        {
            cout<<"Special Array";
            break;
        }
        else
        {
            cout<<"Aray is not special";
            break;
        }
    }
    return true;
}
main()
{
    int n, number[100];

    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin>>number[i];
    }
    specialarray(n,number);
    
}