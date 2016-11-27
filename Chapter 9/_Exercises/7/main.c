#include <stdio.h>

int main(void)
{
	// int f(int a, int b) { ... } ( i is int, x is double)

	// (a) i = f(83, 12); // legal
	// (b) x = f(83, 12); // legal, although the return value is implicitly converted to double.
	// (c) i = f(3.15, 9.28); // legal, although both arguments are implicitly converted to int.
	// (d) x = f(3.15, 9.28); // legal, although both arguments are implicitly converted to int.
	// (e) f(83, 12); // legal, although has no effect if there are no side-effects in f.

	return 0;
}