#include <iostream>
using namespace std;
main()
{
    int n, num;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    cout << "Enter how many numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;

        if (num < 200)
        {
            c1++;
        }
        else if (num <= 399)
        {
            c2++;
        }
        else if (num <= 599)
        {
            c3++;
        }
        else if (num <= 799)
        {
            c4++;
        }
        else
        {
            c5++;
        }
    }
    cout << (c1 * 100.0) / n << "%" << endl;
    cout << (c2 * 100.0) / n << "%" << endl;
    cout << (c3 * 100.0) / n << "%" << endl;
    cout << (c4 * 100.0) / n << "%" << endl;
    cout << (c5 * 100.0) / n << "%" << endl;
}