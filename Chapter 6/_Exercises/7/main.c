#include <stdio.h>

int main(void)
{
	/*
	int i = 9384;

	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);

	Using a for loop instead:
	*/

	for(int i = 9384; i > 0; i /= 10)
		printf("%d ", i);

	return 0;
}