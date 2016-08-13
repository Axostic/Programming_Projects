#include <stdio.h>

int main(void)
{
	int current_balance; // good
	int current__balance; // bad

	/*
	It is a bad idea for an identifier to contain more than one
	adjacent underscore because (a) It does not follow standard
	C naming convention, and (b) underscores are hard to count
	(they're the exact same straight horizontal line...)
	*/

	return 0;
}