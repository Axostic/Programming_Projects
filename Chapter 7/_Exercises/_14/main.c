#include <stdio.h>

int main(void)
{
	/* Does this statement always compute the fractional part of f correctly?
	Assuming f and frac_part are both float variables?

	frac_part = f - (int) f;

	This statement will compute the fractional part of f correctly on positive
	and negative f values, however, it will not if the int type is not big enough
	to hold the converted float value.
		
	*/

	return 0;
}