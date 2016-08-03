#include <stdio.h>

/*
Write a program that asks the user to enter a THREE-digit number, then prints the number
with its digits reversed.
*/

int main(void)
{
	int n, first_two;

	printf("Enter a three-digit integer: ");
	scanf("%d", &n);

	first_two = n / 10;

	printf("The reversal is: %d%d%d", n % 10, (first_two % 10), (first_two / 10));

	return 0;
}