#include <stdio.h>

int evaluate_position(char board[8][8])
{
	int white_sum = 0, black_sum = 0;

	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			switch(board[i][j])
			{
				case 'Q': white_sum += 9; break;
				case 'q': black_sum += 9; break;
				case 'R': white_sum += 5; break;
				case 'r': black_sum += 5; break;
				case 'B': white_sum += 3; break;
				case 'b': black_sum += 3; break;
				case 'N': white_sum += 3; break;
				case 'n': black_sum += 3; break;
				case 'P': white_sum++; break;
				case 'p': black_sum++; break;
				default: break;
			}
		}
	}

	return white_sum - black_sum;
}

int main(void)
{

	return 0;
}