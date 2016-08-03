#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	scanf("%d%f%d", &i, &x, &j);

	/*
	If the user enters: 
	10.3 5 6
	The process is as follows:

	scanf will search from left to right for an integer.
	It scans 1, 0, and then a period. Since an integer
	cannot contain a period, 10 is scanned into &i.
	Now, it will search for a float value starting on
	the period (it was put back into the buffer). It
	scans the period, the number three, and then it
	sees a whitespace, effectively stopping the scanning
	and storing 0.3 at &x. Next, it scans the leftover
	whitespace and then the number 5, and then another
	whitespace, yet again stopping the scanning. It will
	store the number 5 as &j and the rest of the input ( 6)
	will be stored in the buffer because the input has
	satisfied the format string. Proof below.
	*/

	printf("%d, %f, %d", i, x, j);

	return 0;
}