#include <stdio.h>

int gcd(int m, int n)
{
	if(n == 0)
	{
		return m;
	}
	else
	{
		return gcd(n, m % n);
	}
}

int main(void)
{
	int a = 10, b = 25;

	printf("GCD of %d and %d: %d" , a, b, gcd(a, b));

	return 0;
}