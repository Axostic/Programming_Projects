#include <stdio.h>

/*
Write a program that computes the factorial of a positive integer.
Find the largest value of n for which the program stores and prints
the correct factorial.
(a) short: 7
(b) int: 12
(c) long: 20
(d) long long: 20
(e) float: 34
(f) double: 170
(g) long double: 1754
*/

int main(void)
{
	int n;
	//short factorial = 1;
	//int factorial = 1;
	//long factorial = 1;
	//long long factorial = 1;
	//float factorial = 1.0f;
	//double factorial = 1.0;
	long double factorial = 1.0;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
		factorial *= i;

	printf("Factorial of %d: %Lf", n, factorial);

	return 0;
}