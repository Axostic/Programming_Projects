#include <stdio.h>

/*

Write a program that asks the user to enter a value for x and then
displays the value of the following polynominal:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

*/

int main(void)
{
	int x;

	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Final Answer: %d\n",
		3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6
	);

	return 0;
}