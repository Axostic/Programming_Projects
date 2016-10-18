#include <stdio.h>

/*
Write a program fragment that declares an 8 x 8 char array named
checker_board and then uses a loop to store the following data into the
array (one character per array element):

B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B

Hint: The element in row i, column j, should be the letter B if i + j is an
even number.
*/

int main(void)
{
    int row, column;
    char checker_board[8][8];

    for(row = 0; row < 8; row++)
    {
        for(column = 0; column < 8; column++)
            printf("%c ", checker_board[row][column] = ((row + column) % 2 == 0) ? 'B' : 'R');
        printf("\n");
    }

    return 0;
}
