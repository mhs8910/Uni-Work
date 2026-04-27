#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

string checkalphabetcase(char character);

main ()
{
    system("cls");
    char character;
    cout<<"Enter a character : ";
    cin>>character;

    string result = checkalphabetcase(character);

    cout<<"The letter is "<<result;
}

string checkalphabetcase(char character)
{
    if (character >= 'a' && character <= 'z')
    {
        return "Lowercase"; // Lowercase
    }
    else if (character >= 'A' && character <= 'Z')
    {
        return "Uppercase"; // Uppercase
    }
    else
    {
        return "Not an alphabet"; // Not an alphabet
    }
}