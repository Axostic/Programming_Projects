#include <stdio.h>

/*
Write a program that reverses any digit number.
*/

int main(void)
{
	int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	printf("Reversal: ");
	
	do {
		printf("%d", n % 10);
		n /= 10;
	} while(n != 0);

	return 0;
}