#include <stdio.h>

int main(void)
{
	/*
		Suppose i is an int variable, j is a long variable, and k is an unsigned int variable.
		What is the type of the expression i + (int) j * k ?
		( i + (((int)j) * k) )

		(int)j evaluates to int
		(int)j * k evaluates to unsigned int
		i + (int)j * k evaluates to unsigned int

		So, Unsigned Int.

	*/

	return 0;
}