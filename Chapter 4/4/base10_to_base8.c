#include <stdio.h>

/*
Write a program that reads an integer entered by
the user and displays it in octal form (base 8)
*/

int main(void)
{
	int input, n1, n2, n3, n4;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &input);

	n4 = input / 8;
	n3 = 	n4 / 8;
	n2 = 	n3 / 8;
	n1 = 	n2 / 8;

	printf("In octal, your number is: %1d%1d%1d%1d%1d", n1 % 8, n2 % 8, n3 % 8, n4 % 8, input % 8);

	return 0;
}