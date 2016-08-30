#include <stdio.h>

/*
Write a program that accepts multiple number values as
input and outputs the largest number of those values.
*/

int main(void)
{
	float current_number = 0, largest_number = 0;

	for(;;) {
		printf("Enter a number: ");
		scanf("%f", &current_number);

		if (current_number <= 0)
			break;

		if (current_number > largest_number)
			largest_number = current_number;
	}

	printf("The largest number entered was %f", largest_number);

	return 0;
}