#include <stdio.h>

int fact(int n)
{
	return (n <= 1) ? 1 : n * fact(n - 1);
}

int main(void)
{
	int factorial = 5;

	printf("%d! equals %d", factorial, fact(factorial));

	return 0;
}