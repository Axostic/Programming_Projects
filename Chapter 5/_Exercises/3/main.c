#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 3; j = 4; k = 5;
	printf("%d\n", i < j || ++j < k);		// Output: 1
	printf("%d %d %d\n\n", i, j, k);		// Output: 3 4 5

	i = 7; j = 8; k = 9;
	printf("%d\n", i - 7 && j++ < k);		// Output: 0
	printf("%d %d %d\n\n", i, j, k);		// Output: 7 8 9

	i = 7; j = 8; k = 9;
	printf("%d\n", (i = j) || (j = k));		// Output: 1
	printf("%d %d %d\n\n", i, j, k);		// Output: 8 8 9

	i = 1; j = 1; k = 1;
	printf("%d\n", ++i || ++j && ++k);		// Output: 1
	printf("%d %d %d\n\n", i, j, k);		// Output: 2 1 1

	return 0;
}