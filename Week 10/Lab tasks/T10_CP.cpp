#include <iostream>
using namespace std;

string numberToText(int num)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                      "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num >= 1 && num <= 9)
    {
        return ones[num];
    }
    else if (num >= 10 && num <= 19)
    {
        return teens[num - 10];
    }
    else if (num >= 20 && num <= 99)
    {
        if (num % 10 == 0)
        {
            return tens[num / 10];
        }
        else
        {
            return tens[num / 10] + " " + ones[num % 10];
        }
    }
    
    return "Out of range";
}

int main()
{
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;

    cout << "In words: " << numberToText(number);

    return 0;
}