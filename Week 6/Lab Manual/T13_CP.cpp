#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of chords: ";
    cin >> n;

    string chords[n];

    cout << "Enter the chords:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> chords[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (chords[i][chords[i].length() - 1] != '7')
        {
            chords[i] += '7';
        }
    }

    cout << "Jazzified chords:\n";
    for (int i = 0; i < n; i++)
    {
        cout << chords[i] << " ";
    }

    return 0;
}