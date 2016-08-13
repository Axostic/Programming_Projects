#include <stdio.h>

/*
Write a program that calculates how many digits a number
contains. Max 4 digits.
*/

int main(void)
{
	int number, digits;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number <= 9)
		digits = 1;
	else if (number <= 99)
		digits = 2;
	else if (number <= 999)
		digits = 3;
	else if (number <= 9999)
		digits = 4;
	else
		digits = 0;

	printf("The number %d has %d digit(s)\n", number, digits);

	/*
	 Using the conditional operator

	digits = (number <= 9) ? 1 :
			((number <= 99) ? 2 :
			((number <= 999) ? 3 :
			((number <= 9999) ? 4 :
								0)));
								
	printf("The number %d has %d digit(s)\n", number, digits);
	*/

	return 0;
}