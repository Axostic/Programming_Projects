#include <stdio.h>

/*
Write a program that prints the values of sizeof(int), sizeof(short),
sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
*/

int main(void)
{
	printf("This program prints the various sizes of variables according to the users' platform.\n");
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of short: %zu\n", sizeof(short));
	printf("Size of long: %zu\n", sizeof(long));
	printf("Size of float: %zu\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
	printf("Size of long double: %zu\n", sizeof(long double));

	return 0;
}