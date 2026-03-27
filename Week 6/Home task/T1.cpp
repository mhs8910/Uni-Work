#include<iostream>
using namespace std;

int totalsum(int n, int numbers[])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + numbers[i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter the amount of numbers you want to add: ";
    cin >> n;

    int numbers[100];

    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int result = totalsum(n, numbers);

    cout << "The sum of all elements of array is: " << result;

    return 0;
}