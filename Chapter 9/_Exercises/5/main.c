#include <stdio.h>

int num_digits(long n)
{
	int divisions = 0;

	while(n != 0)
	{
		n /= 10;
		divisions++;
	}

	return divisions;
}

int main(void)
{
	long test_num = 19294;

	printf("The number %ld has: %d digits", test_num, num_digits(test_num));

	return 0;
}