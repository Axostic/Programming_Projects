#include <stdio.h>

int main(void)
{
	/*
	int i = 1;
	while (i <= 128) {
		printf("%d ", i);
		i *= 2;
	}
	
	Using a for loop instead:
	*/

	for (int i = 1; i <= 128; i *= 2)
		printf("%d ", i);

	return 0;
}