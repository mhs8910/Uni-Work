#include<iostream>
using namespace std;
main()
{
    int numbers[5];

    for (int count=0 ; count < 5; count++)
    {
        cout<<"Enter the number : ";
        cin>>numbers[count];
    }

    cout<<"The first element of array is : "<<numbers[0]<<endl;
    cout<<"The last element of array is : "<<numbers[4]<<endl;
    
}