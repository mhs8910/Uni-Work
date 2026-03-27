#include<iostream>
using namespace std;
main()
{
    int n, numbers[n];
    cout<<"Enter how many numbers you want to enter : ";
    cin>>n;

    for (int count = 0; count < n; count++)
    {
        cout<<"Enter Number : ";
        cin>>numbers[count] ;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"The "<<n<<" number of the array is : "<<numbers[n]<<endl;
    }
    
}