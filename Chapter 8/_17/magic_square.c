#include <stdio.h>
#include <string.h>

/*
Write a program that prints an n x n magic square  (a square arrangement of the numbers
1, 2, ..., n^2 in which the sums of the rows, columns, and diagonals are all the same).
The user will specify the value of n.
*/

int main(void)
{
	int size, n_squared, current_number, current_row = 0, current_column = 0, next_row, next_column;

	printf("Magic Square Generator\n");
	printf("Enter an odd number between 1 and 99: ");
	scanf("%d", &size);

	current_column = size/2;
	n_squared = size*size;

	int magic_square[size][size];
	memset(magic_square, 0, sizeof(magic_square)); // Unmentioned technique to set all elements of the VLA magic_square to 0.

	for(current_number = 1; current_number <= n_squared; current_number++)
	{
		magic_square[current_row][current_column] = current_number;

		if(current_row == 0) next_row = size - 1;
		else next_row = current_row - 1;

		if(current_column == size - 1) next_column = 0;
		else next_column = current_column + 1;

		if(magic_square[next_row][next_column] != 0) current_row++;
		else
		{
			current_row = next_row;
			current_column = next_column;
		}
	}

	for(current_row = 0; current_row < size; current_row++)
	{
		for(int current_column = 0; current_column < size; current_column++)
			printf("%3d ", magic_square[current_row][current_column]);
		printf("\n");
	}


	return 0;
}