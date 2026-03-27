#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    string students[n];

    cout << "Enter the names of the students: ";
    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
    }

    sort(students, students + n);

    cout << "Alphabetically Arranged Names:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << students[i] << endl;
    }

    return 0;
}