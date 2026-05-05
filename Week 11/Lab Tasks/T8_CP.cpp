#include<iostream>
using namespace std;

const int COLS = 5;

void largestColumnFirst(int M[][COLS], int rows)
{
    int maxColIndex = 0;
    int maxSum = -1000000; // sufficiently small initial value

    // Step 1: Find column with largest sum
    for (int j = 0; j < COLS; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += M[i][j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            maxColIndex = j;
        }
    }

    // Step 2: Swap that column with first column (column 0)
    for (int i = 0; i < rows; i++)
    {
        int temp = M[i][0];
        M[i][0] = M[i][maxColIndex];
        M[i][maxColIndex] = temp;
    }
}

void display(int M[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows = 4;

    int M[4][COLS] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 1, 1, 1, 1},
        {9, 0, 0, 0, 0}
    };

    cout << "Original Matrix:\n";
    display(M, rows);

    largestColumnFirst(M, rows);

    cout << "\nAfter Swapping Largest Column with First Column:\n";
    display(M, rows);

    return 0;
}