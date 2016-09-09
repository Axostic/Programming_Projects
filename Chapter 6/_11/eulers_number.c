#include <stdio.h>

/*
Write a program that approximates eulers number
based on user's input. Factorial will increase
by one until it hits the user approx. number
*/

int main(void)
{
	int approximation_number;
	float eulers_number = 1.0f;

	printf("Enter an integer to approximate eulers number: ");
	scanf("%d", &approximation_number);

	for(int i = 1, factorial_num = 1; i <= approximation_number; i++) {
		factorial_num *= i;
		eulers_number += (1.0f / factorial_num);
	}

	printf("Approximation: %.23f\n", eulers_number);

	return 0;
}