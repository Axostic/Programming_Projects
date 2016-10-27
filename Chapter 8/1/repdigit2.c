#include <stdio.h>
#include <stdbool.h>

#define NUMBER_OF_DIGITS 10

/*
Modify the repdigit.c program of section 8.1 so that it shows
which digits (if any) were repeated.
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

	if(n >= 0) {
		printf("Repeated digit: ");
		for(int current = 0; current < NUMBER_OF_DIGITS; current++)
			if(digit_seen[current] > 1)
				printf("%d ", current);
	}
	else
		printf("No repeated digit\n");

	return 0;
}