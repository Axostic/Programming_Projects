#include <stdio.h>

int main(void)
{
	/*
		Suppose i is an int variable, f is a float variable, and d is a double variable.
		Explain the conversions that take place during the execution of the following statement:
		d = i + f

		First, there is an implicit conversion of the integer variable (i) to a float variable,
		in order to add these float values. (Widening)
		After the float values have been added, the value is then implicity converted into a double
		variable and stored in the double variable (d). (Widening)		
	*/

	return 0;
}