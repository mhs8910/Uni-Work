#include<iostream>
using namespace std;

int colsize = 3;

void printsum(int data[][3], int rowsize)
{
    int sum = 0;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            sum += data[i][j];
        }
    }
    cout << "Sum of all elements is: " << sum << endl;
}

int main()
{
    int rowsize;
    cout << "Enter row size : ";
    cin >> rowsize;

    int data[100][3]; // safer alternative to variable-length array

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> data[i][j];
        }
    }

    printsum(data, rowsize);

    return 0;
}