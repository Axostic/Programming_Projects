#include <stdio.h>

int main(void)
{
	int i = 10;

	while (i >= 1, i /= 2)
		printf("%d ", i++);

	/*
	for (int i = 10; i >= 1; i /= 2) {
		printf("%d ", i++);
	}

	There appears to be a problem where the loop never ends due because 1 increments to 2 and 2/2 is 1, and so on...
	Here is the logical process behind it:
	(print 10 --> 11/2 --> print 5 --> 6/2 --> print 3 --> 4/2 --> print 2 --> 3/2 --> print 1 --> 2/2 --> print 1 --> 2/2 ........)
	*/

	return 0;
}