#include <stdio.h>

double inner_product(double a[], double b[], int n)
{
	double total = 0.0;

	for(int i = 0; i < n; i++)
	{
		total += a[i] * b[i];
	}

	return total;
}

int main(void)
{
	double first[] = {5, 10};
	double second[] = {2, 4};

	printf("Total: %f", inner_product(first, second, 2));

	return 0;
}