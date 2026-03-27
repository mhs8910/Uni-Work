#include<iostream>
using namespace std;
main()
{
    int numbers[5];

    cout<<"Enter the number you want to store in number[0] : ";
    cin>>numbers[0];
    cout<<"Enter the number you want to store in number[1] : ";
    cin>>numbers[1];
    cout<<"Enter the number you want to store in number[2] : ";
    cin>>numbers[2];
    cout<<"Enter the number you want to store in number[3] : ";
    cin>>numbers[3];
    cout<<"Enter the number you want to store in number[4] : ";
    cin>>numbers[4];

    cout<<"The first element at loacation numbers[1] is: "<<numbers[1]<<endl;
    cout<<"The last element at loacation numbers[4] is: "<<numbers[4]<<endl;
}