#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SQUARE_BOARD_MEASURE 10
#define POSSIBLE_MOVES 4
#define UPPER_BOUNDS 9
#define LOWER_BOUNDS 0

/*
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
main first calls generate_random_walk, which initializes the array to contain '.' characters
and then replaces some of these characters by the letters A through Z, as described in the
original project. main then calls print_array to display the array on the screen.
*/

void generate_random_walk(char walk[SQUARE_BOARD_MEASURE][SQUARE_BOARD_MEASURE]);
void print_array(char walk[SQUARE_BOARD_MEASURE][SQUARE_BOARD_MEASURE]);

int main(void)
{
	char board[SQUARE_BOARD_MEASURE][SQUARE_BOARD_MEASURE];

	generate_random_walk(board);
	print_array(board);

	return 0;
}

void generate_random_walk(char walk[SQUARE_BOARD_MEASURE][SQUARE_BOARD_MEASURE])
{
	char current_letter = 'B';
	int current_row = 0, current_col = 0;

	for(int i = 0; i < SQUARE_BOARD_MEASURE; i++)
		for(int j = 0; j < SQUARE_BOARD_MEASURE; j++)
			walk[i][j] = '.';

	srand((unsigned) time(NULL)); // Initialize Random # Generator

	switch(rand() % POSSIBLE_MOVES) // Find a random corner to start
	{
		case 1: current_col = UPPER_BOUNDS; break;
		case 2: current_row = UPPER_BOUNDS; current_col = UPPER_BOUNDS; break;
		case 3: current_row = UPPER_BOUNDS; break;
	}
	
	walk[current_row][current_col] = 'A';

	while(current_letter <= 'Z')
	{
		if((walk[current_row - 1][current_col] != '.') && (walk[current_row + 1][current_col] != '.') &&
			(walk[current_row][current_col - 1] != '.') && (walk[current_row][current_col + 1] != '.'))
			break;

		switch(rand() % POSSIBLE_MOVES)
		{
			case 0: // up
				if((current_row - 1 < LOWER_BOUNDS) || (walk[current_row - 1][current_col] != '.')) { continue; }
				else { walk[--current_row][current_col] = current_letter; }
				break;

			case 1: // right
				if((current_col + 1 > UPPER_BOUNDS) || (walk[current_row][current_col + 1] != '.')) { continue; }
				else { walk[current_row][++current_col] = current_letter; }
				break;

			case 2: // down
				if((current_row + 1 > UPPER_BOUNDS) || (walk[current_row + 1][current_col] != '.')) { continue; }
				else { walk[++current_row][current_col] = current_letter; }
				break;

			case 3: // left
				if((current_col - 1 < LOWER_BOUNDS) || (walk[current_row][current_col - 1] != '.')) { continue; }
				else { walk[current_row][--current_col] = current_letter; }
				break;
		}
		current_letter++;
	}
}

void print_array(char walk[SQUARE_BOARD_MEASURE][SQUARE_BOARD_MEASURE])
{
	for(int row = 0; row < SQUARE_BOARD_MEASURE; row++)
	{
		for(int col = 0; col < SQUARE_BOARD_MEASURE; col++)
			printf("%c ", walk[row][col]);
		printf("\n");
	}
}