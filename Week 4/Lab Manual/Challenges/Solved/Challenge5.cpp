#include <iostream>
using namespace std;
int main()
{
    string name1, name2, name3;
    int age1, age2, age3;

    cout << "Enter name of first brother: ";
    cin >> name1;
    cout << "Enter age: ";
    cin >> age1;

    cout << "Enter name of second brother: ";
    cin >> name2;
    cout << "Enter age: ";
    cin >> age2;

    cout << "Enter name of third brother: ";
    cin >> name3;
    cout << "Enter age: ";
    cin >> age3;

    if (age1 <= age2 && age1 <= age3)
    {
        cout << "Youngest brother is: " << name1 << endl;
    }
    else if (age2 <= age1 && age2 <= age3)
    {
        cout << "Youngest brother is: " << name2 << endl;
    }
    else
    {
        cout << "Youngest brother is: " << name3 << endl;
    }
}