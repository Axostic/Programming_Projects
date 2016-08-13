#include <stdio.h>

int main(void)
{
	/*
	if (n == 1-10)
		printf("n is between 1 and 10\n");

	Yet again, this 'if' statement is technically legal; however,
	it does not have the same meaning the programmer intended.
	1-10 is not a valid way of finding a range; instead, c will
	interpret it as an expression and evaluate it to -9. Then,
	the if statement will only execute when n is equal to -9 (-9 == -9).

	Example using 5 as n:
	if(n == 1-10).....
	if(0 == 1-10).....
	if(0 == -9).......
	if(0).............

	As we know, zero in c is equivalent to the meaning of false.
	Therefore, the 'if' statement will not run; even though
	n (in this case 5) is between 1 and 10.
	*/

	if (5 == 1-10)
		printf("n is between 1 and 10\n");

	return 0;
}