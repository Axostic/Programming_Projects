#include <stdio.h>

/*
Rewrite the upc.c program of section 4.1 so that the user
enters the FULL upc number, including the check digit, and
the computer checks whether that check digit is valid or not.

**Parts of program used from Chapter 4 Programming Project #5. **
*/

int main(void)
{
	int u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11, check_digit, computed_check_digit;

	printf("Enter the full UPC number: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &u1, &u2, &u3, &u4, &u5, &u6, &u7, &u8, &u9, &u10, &u11, &check_digit);

	computed_check_digit = 9-((((u1+u3+u5+u7+u9+u11)*3+(u2+u4+u6+u8+u10))-1)%10);

	if (check_digit == computed_check_digit)
		printf("VALID UPC");
	else
		printf("INVALID UPC");

	return 0;
}