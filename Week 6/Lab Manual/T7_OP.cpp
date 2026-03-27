#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the amount of resistances connected: ";
    cin >> n;

    int r[100];   // fixed size array (or use dynamic allocation)
    int rt = 0;   // initialize total resistance

    for (int i = 0; i < n; i++)
    {
        cout << "Enter resistance " << i + 1 << ": ";
        cin >> r[i];
    }

    for (int i = 0; i < n; i++)
    {
        rt = rt + r[i];
    }

    cout << "RT = " << rt << " ohm" << endl;

    return 0;
}