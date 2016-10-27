#include <stdio.h>

#define NUMBER_OF_DIGITS 10

/*
Modify the repdigit.c program of section 8.1 so that it prints
a table showing how many times each digit appears in the number
*/

int main(void)
{
	int digit_seen[NUMBER_OF_DIGITS] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0)
	{
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("Digit:       ");
	for(digit = 0; digit < NUMBER_OF_DIGITS; digit++)
		printf("%d\t", digit);

	printf("\n");

	printf("Occurences:  ");
	for(digit = 0; digit < NUMBER_OF_DIGITS; digit++)
		printf("%d\t", digit_seen[digit]);



	return 0;
}