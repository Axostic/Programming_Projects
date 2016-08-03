#include <stdio.h>

/*
Modify Programming Project 5 in this chapter so as to
calculate the check digit for a European Artican Number (EAN)
*/

int main(void)
{
	int check_digit, u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11, u12;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &u1, &u2, &u3, &u4, &u5, &u6, &u7, &u8, &u9, &u10, &u11, &u12);

	check_digit = 9-((((u2+u4+u6+u8+u10+u12)*3+(u1+u3+u5+u7+u9+u11))-1)%10);

	printf("Check digit: %d", check_digit);

	return 0;
}