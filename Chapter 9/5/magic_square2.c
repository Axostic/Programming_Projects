#include <stdio.h>
#include <string.h>

/*
Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
After obtaining the number n from the user, main will call create_magic_square, passing
it an n x n array that is declared inside main. create_magic_square will fill the array
with the numbers 1, 2, ..., n^2 as described in the original project. main will then
call print_magic_square, which will display the array in the format described in the
original project. Note: if your compiler doesn't support variable-length arrays, declare
the array in main to be 99 x 99 instead of n x n and use the following prototypes instead:
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
*/

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);


int main(void)
{
	int size;

	printf("Magic Square Generator\n");
	printf("Enter an odd number between 1 and 99: ");
	scanf("%d", &size);

	int magic_square[size][size];
	memset(magic_square, 0, sizeof(magic_square)); // Unmentioned technique to set all elements of the VLA magic_square to 0.
	
	create_magic_square(size, magic_square);
    print_magic_square(size, magic_square);

	return 0;
}


void create_magic_square(int n, int magic_square[n][n])
{
	int n_squared, current_number, current_row = 0, current_column = 0, next_row, next_column;

	current_column = n/2;
	n_squared = n*n;


	for(current_number = 1; current_number <= n_squared; current_number++)
	{
		magic_square[current_row][current_column] = current_number;

		if(current_row == 0) next_row = n - 1;
		else next_row = current_row - 1;

		if(current_column == n - 1) next_column = 0;
		else next_column = current_column + 1;

		if(magic_square[next_row][next_column] != 0) current_row++;
		else
		{
			current_row = next_row;
			current_column = next_column;
		}
	}
}


void print_magic_square(int n, int magic_square[n][n])
{
	for(int current_row = 0; current_row < n; current_row++)
	{
		for(int current_column = 0; current_column < n; current_column++)
			printf("%3d ", magic_square[current_row][current_column]);
		printf("\n");
	}
}