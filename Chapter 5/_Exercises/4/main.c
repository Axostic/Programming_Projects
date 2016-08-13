#include <stdio.h>

#define EXP (i > j) - (i < j)

int main(void)
{
	int i, j;

	i = 5; j = 10;
	printf("%d\n", EXP);	// Output: -1

	i = 5; j = 5;
	printf("%d\n", EXP);	// Output: 0

	i = 10; j = 5;
	printf("%d\n", EXP);	// Output: 1

	return 0;
}