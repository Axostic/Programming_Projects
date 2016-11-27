#include <stdio.h>

int gcd(int m, int n)
{
	int o;

	while(n != 0)
	{
		o = n;
		n = m % n;
		m = o;
	}

	return m;
}

int main(void)
{
	int a = 10, b = 25;

	printf("GCD of %d and %d: %d" , a, b, gcd(a, b));

	return 0;
}