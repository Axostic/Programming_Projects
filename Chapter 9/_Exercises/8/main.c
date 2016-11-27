#include <stdio.h>

int main(void)
{
	// Valid prototypes for a function that returns nothing and has a single double parameter

	// (a) void f(double x); // valid
	// (b) void f(double); // valid (type has to be specified, name of parameter does not in prototype)
	// (c) void f(x); // invalid (type for parameter not specified)
	// (d) f(double x); // invalid as return type defaults to int (actually illegal in c99)

	return 0;
}