#include<iostream>
using namespace std;

string fire(char grid[5][5], string coord)
{
    int row = coord[0] - 'A';   // A-E → 0-4
    int col = coord[1] - '1';   // 1-5 → 0-4

    if (grid[row][col] == '*')
        return "BOOM";
    else
        return "splash";
}

int main()
{
    // Hardcoded 5x5 Battleship grid
    char grid[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}
    };

    string coord;
    cout << "Enter coordinate to fire torpedo (e.g., A1, B3, E5): ";
    cin >> coord;

    cout << "Result : " << fire(grid, coord) << endl;

    return 0;
}