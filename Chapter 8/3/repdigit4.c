#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_DIGITS 10

/*
Modify the repdigit.c program of 8.1 so that the user
can enther more than one number to be tested for repeated
digits. The program should terminate when the user enters
a number that's less than or equal to zero.
*/

int main(void)
{
	bool digit_seen[NUMBER_OF_DIGITS] = {false};
	int digit;
	long n;

	while(true)
	{

		printf("Enter a number: ");
		scanf("%ld", &n);

		if(n <= 0)
			break;

		while(n > 0)
		{
			digit = n % 10;
			if(digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}

		if(n > 0)
			printf("Repeated Digit\n\n");
		else
			printf("No repeated digit\n\n");
	}

	printf("Thank you! Exiting...\n");

	return 0;
}