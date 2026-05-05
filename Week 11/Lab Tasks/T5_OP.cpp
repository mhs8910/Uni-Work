#include<iostream>
using namespace std;

bool checkidentitymatrix(int data[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == j && data[i][j] != 1) || (i != j && data[i][j] != 0))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int data[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> data[i][j];
        }
    }

    if (checkidentitymatrix(data))
        cout << "The matrix is an identity matrix." << endl;
    else
        cout << "The matrix is not an identity matrix." << endl;

    return 0;
}