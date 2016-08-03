#include <stdio.h>

// Value of the printf's in C99

int main(void)
{
	printf("%d\n", 8 % 5);	// Output: 3
	printf("%d\n", -8 % 5);	// Output: -3
	printf("%d\n", 8 % -5);	// Output: 3
	printf("%d\n", -8 % -5);	// Output: -3
	
	return 0;
}