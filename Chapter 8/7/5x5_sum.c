#include <stdio.h>

#define SQUARE_MATRIX_NUM 5

/* 
Write a program that reads a 5 x 5 array of integers and then prints the
row sums and the column sums.
*/

int main(void)
{
	int sum = 0, row_num, col_num, square_matrix[SQUARE_MATRIX_NUM][SQUARE_MATRIX_NUM] = {0};

	for(row_num = 0; row_num < SQUARE_MATRIX_NUM; row_num++)
	{
		printf("Enter row %d: ", row_num+1);
		for(col_num = 0; col_num < SQUARE_MATRIX_NUM; col_num++)
			scanf("%d", &square_matrix[row_num][col_num]);
	}

	printf("\nRow totals:");
	for(row_num = 0; row_num < SQUARE_MATRIX_NUM; row_num++)
	{
		for(col_num = 0; col_num < SQUARE_MATRIX_NUM; col_num++)
			sum += square_matrix[row_num][col_num];
		printf(" %d", sum);
		sum = 0;
	}

	printf("\nColumn totals:");
	for(col_num = 0; col_num < SQUARE_MATRIX_NUM; col_num++)
	{
		for(row_num = 0; row_num < SQUARE_MATRIX_NUM; row_num++)
			sum += square_matrix[row_num][col_num];
		printf(" %d", sum);
		sum = 0;
	}

	return 0;
}