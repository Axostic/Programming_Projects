#include <stdio.h>

/*
Rewrite the upc.c program so that the user enters 11 digits at
one, instead of entering one digit, then five, and then another five.
*/

int main(void)
{
	int check_digit, u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &u1, &u2, &u3, &u4, &u5, &u6, &u7, &u8, &u9, &u10, &u11);

	check_digit = 9-((((u1+u3+u5+u7+u9+u11)*3+(u2+u4+u6+u8+u10))-1)%10);

	printf("Check digit: %d", check_digit);

	return 0;
}