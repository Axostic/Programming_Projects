#include <stdio.h>

int check(int x, int y, int n)
{
	return ((x >= 0 && x <= n-1)  && (y >= 0 && y <= n-1));
}

int main(void)
{
	int x = 4, y = 7, n = 7;

	printf("Check exit code: %d", check(x, y, n));

	return 0;
}