#include <stdio.h>

#define TAX 1.05f
/*

Write a program that asks the user to enter a dollar-and-cents amount,
then displays the amount with 5% tax added.
Example: input $100 --> output $105

*/

int main(void)
{
	float input_amount = 0.0f;

	printf("Enter the amount: $");
	scanf("%f", &input_amount);
	printf("With %0.2f Tax multiplier: $%0.2f\n", TAX, input_amount*TAX);

	return 0;
}