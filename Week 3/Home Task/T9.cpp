#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    int digit1, digit2, digit3, digit4, sum;

    digit1 = num % 10;
    num = num / 10;

    digit2 = num % 10;
    num = num / 10;

    digit3 = num % 10;
    num = num / 10;

    digit4 = num % 10;

    sum = digit1 + digit2 + digit3 + digit4;

    cout << "Sum of digits : " << sum;
}