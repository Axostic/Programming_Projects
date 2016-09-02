#include <stdio.h>

/*
Write a program that reduces a fraction
entered by the user to lowest terms.
*/

int main(void)
{
	int numerator, denominator, placeholder, gcd, gcd2;

	printf("Enter a fraction: ");
	scanf("%d /%d", &numerator, &denominator);

	gcd = numerator;
	gcd2 = denominator;

	while(gcd2 != 0) {
		placeholder = gcd2;
		gcd2 = gcd % gcd2;
		gcd = placeholder;
	}

	printf("Simplified fraction: %d/%d", numerator/gcd, denominator/gcd);


	return 0;
}