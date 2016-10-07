#include <stdio.h>
#include <math.h>

#define INITIAL_GUESS 1

/*
Write a program that uses Netwon's method to compute
the square root of a positive floating-point number.
*/

int main(void)
{
	double x, y, average, square_root;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	// set the initial guess equal to 1.
	y = INITIAL_GUESS;

	for(;;)
	{
		// calculate the mean of 'y' and 'x/y'
		average = (y + (x/y)) / 2;

		// if precise enough, set square root equal to average and break loop.
		if(fabs(y - average) < 0.00001f * average)
		{
			square_root = average;
			break;
		}

		// if square root not precise enough, set y to the new average.
		y = average;
	}

	printf("Square root: %lf", square_root);

	return 0;
}