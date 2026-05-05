#include<iostream>
using namespace std;

const int SIZE = 5;

char world[SIZE][SIZE] =
{
    {'-','-','#','-','#'},
    {'#','-','-','#','-'},
    {'-','#','-','-','-'},
    {'#','-','#','-','#'},
    {'#','-','-','-','-'}
};

bool gravityEnabled = true;

void DisplayWorld()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << world[i][j] << " ";
        }
        cout << endl;
    }
}

void SetGravityStatus(bool status)
{
    gravityEnabled = status;
}

void TimeTick(int times)
{
    if (!gravityEnabled)
        return;

    for (int t = 0; t < times; t++)
    {
        // start from bottom so blocks don’t overwrite wrongly
        for (int i = SIZE - 2; i >= 0; i--)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (world[i][j] == '#')
                {
                    if (world[i + 1][j] == '-')
                    {
                        world[i + 1][j] = '#';
                        world[i][j] = '-';
                    }
                }
            }
        }
    }
}

int main()
{
    cout << "Initial World:\n";
    DisplayWorld();

    TimeTick(1);
    cout << "\nAfter 1 Tick:\n";
    DisplayWorld();

    TimeTick(2);
    cout << "\nAfter 3 Total Ticks:\n";
    DisplayWorld();

    return 0;
}