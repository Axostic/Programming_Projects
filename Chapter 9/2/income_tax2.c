#include <stdio.h>

/*
Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
amount of income tax. When passed an amount of taxable income, the function will return
the tax due.
*/

float compute_tax(float income)
{
	float tax_due = 0.0f;

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

	return tax_due;
}

int main(void)
{
	float income = 0.0f;

	printf("---Taxable Income Calculator---\n\n");

	printf("Please enter your taxable income: $");
	scanf("%f", &income);

	printf("Tax due: $%.2f\n", compute_tax(income));

	return 0;
}