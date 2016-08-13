#include <stdio.h>

#define n 0

int main(void)
{
	/*
	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");

	Yes, this 'if' statement is legal. However, the arithmetic
	is incorrect due to precedence. Let's break it down.

	Since arithmetic operators have left-to-right associativity:
	n >= 1 <= 10
	(n >= 1) <= 10
	Lets plug in zero for n:
	(0 >= 1) <= 10
	(0) <= 10
	1
	Since 1 satisfies the if statement, the statement below
	the if statement is ran; however, zero is not between 1 and 10.

	Easy fix:
	n >= 1 && n <= 10
	*/
	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");	// should *incorrectly* print

	if (n >= 1 && n <= 10)
		printf("n is between 1 and 10\n");	// should not print

	return 0;
}