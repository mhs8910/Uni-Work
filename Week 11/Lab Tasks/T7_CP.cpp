#include<iostream>
using namespace std;

const int ROWS = 7;
const int COLS = 16;

bool isGoalScored(char field[ROWS][COLS])
{
    int ballRow = -1, ballCol = -1;
    int crossbarRow = -1;

    // Step 1: find ball and detect crossbar row
    for (int i = 0; i < ROWS; i++)
    {
        int hashCount = 0;

        for (int j = 0; j < COLS; j++)
        {
            if (field[i][j] == '0')
            {
                ballRow = i;
                ballCol = j;
            }

            if (field[i][j] == '#')
                hashCount++;
        }

        // assume crossbar row has many '#'
        if (hashCount >= 7)
            crossbarRow = i;
    }

    if (ballRow == -1 || crossbarRow == -1)
        return false;

    // Step 2: ball must be ABOVE crossbar
    if (ballRow >= crossbarRow)
        return false;

    // Step 3: find goal posts (first and last '#')
    int leftPost = -1, rightPost = -1;

    for (int j = 0; j < COLS; j++)
    {
        if (field[crossbarRow][j] == '#')
        {
            if (leftPost == -1)
                leftPost = j;
            rightPost = j;
        }
    }

    // Step 4: check if ball is between posts
    return (ballCol > leftPost && ballCol < rightPost);
}

int main()
{
    char field[ROWS][COLS] =
    {
        {' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ','#',' ','#','0',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    };

    cout << (isGoalScored(field) ? "true" : "false") << endl;

    return 0;
}