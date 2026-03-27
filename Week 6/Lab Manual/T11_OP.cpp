#include<iostream>
using namespace std;

int main()
{
    string sentence;

    cout << "Enter the sentence or word: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++)
    {
        char ch = sentence[i];

        if (ch!='a' && ch!='A' &&
            ch!='e' && ch!='E' &&
            ch!='i' && ch!='I' &&
            ch!='o' && ch!='O' &&
            ch!='u' && ch!='U')
        {
            cout << ch;
        }
    }

    return 0;
}