#include <stdio.h>

int fact(int n)
{
	int total = 1;

	for(int i = 2; i <= n; i++)
	{
		total *= i;
	}

	return total;
}

int main(void)
{
	int factorial = 5;

	printf("%d! equals %d", factorial, fact(factorial));
	
	return 0;
}