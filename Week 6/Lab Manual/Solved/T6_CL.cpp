#include<iostream>
using namespace std;
main()
{
    int numbers[5]={1,2,3,4,5}, sum;

    for (int i = 0; i <=5; i++)
    {
        sum=sum+numbers[i];
    }
    cout<<"The sum of first five natural numbers is : "<<sum;
}