#include <stdio.h>

double median(double x, double y, double z)
{
	// Good luck ;-)
	return ((x <= y) ? ((y <= z) ? y : ((x <= z) ? z : x)) : ((z <= y) ? y : ((x <= z) ? x : z)));
}

int main(void)
{
	double a = 7.0, b = 1.0, c = 9.0;

	printf("Median of %.1f %.1f %.1f: %.1f", a, b, c, median(a, b, c));

	return 0;
}