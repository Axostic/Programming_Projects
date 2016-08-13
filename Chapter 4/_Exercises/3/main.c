#include <stdio.h>

// Value of the printf's in C89

int main(void)
{
	printf("%d\n", 8 / 5);	// Output: 1
	printf("%d\n", -8 / 5);	// Output: -1 or -2
	printf("%d\n", 8 / -5);	// Output: -1 or -2
	printf("%d\n", -8 / -5);	// Output: 1
	
	return 0;
}