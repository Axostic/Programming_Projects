#include <stdio.h>

int main(void)
{
	int i;
	float x, y;

	scanf("%f%d%f", &x, &i, &y);

	/*
	If the user enters: 
	12.3 45.6 789
	The process is as follows:

	scanf will search from left to right for a float
	value. It scans 1, 2, the period, 3, and finally
	stops at the whitespace. It will store 12.3 into
	&x. Scanf begins at the whitespace, continues onto
	4, 5, and stops at the period, since integers cannot
	contain periods. The period is put back into buffer and
	45 is stored into &i. Next, scanf scans the period, 6,
	and stops at the whitespace. Floats can contain periods
	so .6 or 0.6 is put into &y. The rest of the input ( 789)
	is put into buffer for the next input/output operation
	because the input has satisfied the format string.
	Proof below.
	*/

	printf("%f, %d, %f", x, i, y);

	return 0;
}