#include <stdio.h>

/*
Write a program that prints the reversal of a three-digit-number
without using arithmetic to split the number into digits.
*/

int main(void)
{
	int n1, n2, n3;

	printf("Enter a three-digit integer: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);				// trick: use scanf with field value of one

	printf("The reversal is: %d%d%d", n3, n2, n1);

	return 0;
}