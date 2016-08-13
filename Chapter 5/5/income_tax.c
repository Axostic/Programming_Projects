#include <stdio.h>

/*
Write a program that calculates the income tax
based on taxable income of a single person.
*/

int main(void)
{
	float income = 0, tax_due = 0;

	printf("--------STATE OF FLORIDA--------\n   Taxable Income Calculator\n\n");

	printf("Please enter your taxable income: $");
	scanf("%f", &income);

	printf("Tax due: $");

	if (income <= 750.00f)
		tax_due = 0.01f * income;
	else if (income <= 2250.00f)
		tax_due = 0.02 * income + 7.50f;
	else if (income <= 3750.00f)
		tax_due = 0.03 * income + 37.50f;
	else if (income <= 5250.00f)
		tax_due = 0.04 * income + 82.50f;
	else if (income <= 7000.00f)
		tax_due = 0.05 * income + 142.50f;
	else
		tax_due = 0.06 * income + 230.00f;

	printf("%.2f\n", tax_due);

	return 0;
}