#include<iostream>
using namespace std;
main()
{
    int amount;
    cout<<"Enter the amount of numbers : ";
    cin>>amount;

    if (amount<=0)
    {
        cout<<"Invalid input";
    }
    else
    {
        cout<<"Enter the numbers : "<<endl;
        int numbers[amount];
        for (int i = 0; i < amount; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cin>>numbers[i];
                if (numbers[i]==numbers[j])
                {
                    cout<<"You have entered it already. Try again for all";
                }
            }
        }
    }
    
}