#include<iostream>
using namespace std;
int amountofevennumbers(int n, int numbers[])
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i]%2==0)
        {
            count=count+1;
        }
        
    }
    return count;
    
}
main()
{
    int count, n, numbers[100];
    cout<<"Enter the amount of numbers : ";
    cin>>n;

    cout<<"Enter the numbers : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>numbers[i];
    }
    count=amountofevennumbers(n, numbers);

    cout<<"The number of even numbers in the array is : "<<count;
}