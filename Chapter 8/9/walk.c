#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SQUARE_BOARD_MEASURE 10
#define POSSIBLE_MOVES 4
#define UPPER_BOUNDS 9
#define LOWER_BOUNDS 0

/*
Write a program that generates a "random walk" across a 10x10 array. The array will
contain characters (all '.' initially). The program must randomly "walk" from element
to element, always going up, down, left, or right by one element. The elements visited
by the program will be labeled with the letters A through Z, in the order visited.
*/

int main(void)
{
	char current_letter = 'B', board[SQUARE_BOARD_MEASURE][SQUARE_BOARD_MEASURE];
	int current_row = 0, current_col = 0;

	for(int i = 0; i < SQUARE_BOARD_MEASURE; i++)
		for(int j = 0; j < SQUARE_BOARD_MEASURE; j++)
			board[i][j] = '.';

	srand((unsigned) time(NULL)); // Initialize Random # Generator

	switch(rand() % POSSIBLE_MOVES) // Find a random corner to start
	{
		case 1: current_col = UPPER_BOUNDS; break;
		case 2: current_row = UPPER_BOUNDS; current_col = UPPER_BOUNDS; break;
		case 3: current_row = UPPER_BOUNDS; break;
	}
	
	board[current_row][current_col] = 'A';

	while(current_letter <= 'Z')
	{
		if((board[current_row - 1][current_col] != '.') && (board[current_row + 1][current_col] != '.') &&
			(board[current_row][current_col - 1] != '.') && (board[current_row][current_col + 1] != '.'))
			break;

		switch(rand() % POSSIBLE_MOVES)
		{
			case 0: // up
				if((current_row - 1 < LOWER_BOUNDS) || (board[current_row - 1][current_col] != '.')) { continue; }
				else { board[--current_row][current_col] = current_letter; }
				break;

			case 1: // right
				if((current_col + 1 > UPPER_BOUNDS) || (board[current_row][current_col + 1] != '.')) { continue; }
				else { board[current_row][++current_col] = current_letter; }
				break;

			case 2: // down
				if((current_row + 1 > UPPER_BOUNDS) || (board[current_row + 1][current_col] != '.')) { continue; }
				else { board[++current_row][current_col] = current_letter; }
				break;

			case 3: // left
				if((current_col - 1 < LOWER_BOUNDS) || (board[current_row][current_col - 1] != '.')) { continue; }
				else { board[current_row][--current_col] = current_letter; }
				break;
		}
		current_letter++;
	}

	for(current_row = 0; current_row < SQUARE_BOARD_MEASURE; current_row++)
	{
		for(current_col = 0; current_col < SQUARE_BOARD_MEASURE; current_col++)
			printf("%c ", board[current_row][current_col]);
		printf("\n");
	}

	return 0;
}