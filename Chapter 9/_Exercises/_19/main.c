#include <stdio.h>

void pb(int n)
{
	if(n != 0)
	{
		pb(n / 2);
		putchar('0' + n % 2);
	}
}

// the function converts a decimal integer to binary.

int main(void)
{
	pb(60);

	return 0;
}