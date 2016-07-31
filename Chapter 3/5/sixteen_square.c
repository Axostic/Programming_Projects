#include <stdio.h>

/*
Write a program that asks the user to enter numbers 1-16 (in any order)
and then displays the numbers in a 4x4 arrangement, followed by the
sums of the rows, columns, and diagonals.
*/

int main(void)
{
	int one, two, three, four;
	int five, six, seven, eight;
	int nine, ten, eleven, twelve;
	int thirteen, fourteen, fifteen, sixteen;

	printf("Enter the numbers 1-16 in any order:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
		&one, &two, &three, &four, &five, &six, &seven, &eight,
		&nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen
	);
	
	printf("\n%3d %3d %3d %3d\n%3d %3d %3d %3d\n%3d %3d %3d %3d\n%3d %3d %3d %3d\n",
		one, two, three, four, five, six, seven, eight,
		nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen
	);

	printf("Row sums: %d %d %d %d\n",
		one+two+three+four, five+six+seven+eight,
		nine+ten+eleven+twelve, thirteen+fourteen+fifteen+sixteen
	);
	printf("Column sums: %d %d %d %d\n",
		one+five+nine+thirteen, two+six+ten+fourteen,
		three+seven+eleven+fifteen, four+eight+twelve+sixteen
	);
	printf("Diagonal sums: %d %d\n",
		one+six+eleven+sixteen, four+seven+ten+thirteen
	);

	return 0;
}