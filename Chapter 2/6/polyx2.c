#include <stdio.h>

/*
Modify the program of programming project 5 so that the polynominal
is evaluated using the following formula:
((((3x+2)x-5)x-1)x+7)x-6
*/

int main(void)
{
	int x;

	printf("Solving for 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Answer: %d\n",
		((((3*x+2)*x-5)*x-1)*x+7)*x-6
	);

	return 0;
}