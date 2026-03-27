#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter number of elements in array 1: ";
    cin >> n1;

    int numbers1[100];

    cout << "Enter elements of array 1:\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> numbers1[i];
    }

    cout << "Enter number of elements in array 2: ";
    cin >> n2;

    int numbers2[100];

    cout << "Enter elements of array 2:\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> numbers2[i];
    }

    int result[200];

    result[0] = numbers1[0];

    for (int i = 0; i < n2; i++)
    {
        result[i + 1] = numbers2[i];
    }

    result[n2 + 1] = numbers1[1];

    cout << "Result array: ";
    for (int i = 0; i < n2 + 2; i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}