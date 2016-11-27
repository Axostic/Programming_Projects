#include <stdio.h>

int digit(int n, int k)
{
	for (int i = 0; i < k-1; i++)
	{
		n /= 10;
	}

	return n % 10;
}

int main(void)
{
	int num = 596, place = 2;

	printf("%d from right in %d: %d", place, num, digit(num, place));

	return 0;
}