#include <stdio.h>

/*
The square2.c program of Section 6.3 will fail (usually by printing strange answers)
if i * i exceeds the maximum int value. Run the program and determine the smallest
of n that causes failure. Try changing the type if i to short and running the program
again. (Update Conversion Specifications). Then try long as well. From these experiments,
what can you conclude about the number of bits used to store integer types on your machine?

I Compiled using GCC C99 and am running on a x64 system.

Smallest short int input value that causes failure: 182 (produces negative output)
Smallest int input value that causes failure: 46341 (produces negative output)
Smallest long int input value that causes failure: 403992 (produces very odd output, almost random output...)

I can conclude that, on my system, short integers are 16-bit, integers are 32-bit,
and long integers are 64-bit.
*/

int main(void)
{
	int n;
	long i;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%20ld%20ld\n", i, i * i); // Changed the field width to 20 so numbers would fit

	return 0;
}