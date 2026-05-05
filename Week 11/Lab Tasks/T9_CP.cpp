#include<iostream>
using namespace std;

int countIdenticalArrays(int arr[][3], int n)
{
    int count = 0;
    bool visited[n] = {false};

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        int frequency = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][0] == arr[j][0] &&
                arr[i][1] == arr[j][1] &&
                arr[i][2] == arr[j][2])
            {
                frequency++;
                visited[j] = true;
            }
        }

        if (frequency > 1)
            count += frequency;
    }

    return count;
}

int main()
{
    int arr[4][3] =
    {
        {0, 0, 0},
        {0, 1, 2},
        {0, 0, 0},
        {2, 1, 0}
    };

    cout << countIdenticalArrays(arr, 4) << endl;

    return 0;
}