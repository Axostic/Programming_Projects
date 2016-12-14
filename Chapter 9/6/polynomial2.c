#include <stdio.h>

/*
Write a function that computes the value of the following polynomial:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Write a program that asks the user to enter a value for x, calls the
function to compute the value of the polynomial, and then displays
the value returned by the function.
*/

long compute(long x);

int main(void)
{
	long x_value;

	printf("Enter a value for x: ");
	scanf("%ld", &x_value);

	printf("x: %ld\n", x_value);
	printf("f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("f(x) = %ld\n", compute(x_value));

	return 0;
}


long compute(long x)
{
	return (3*(x*x*x*x*x)) + (2*(x*x*x*x)) - (5*(x*x*x)) - (x*x) + (7*x) - 6;
}