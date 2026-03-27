#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size)
{
    int largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input";
        return 0;
    }

    int arr[100];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = findLargestNumber(arr, n);

    cout << "Largest number is: " << largest << endl;

    return 0;
}