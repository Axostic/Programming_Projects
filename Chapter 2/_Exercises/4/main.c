#include <stdio.h>

int main(void)
{
	int sagitarrius, alpha, beta, omega;
	float pi, golden_ratio, long_var;

	printf("Printing Uninitialized Integers:\n%d\n%d\n%d\n%d\n",
		sagitarrius, alpha, beta, omega
	);
	printf("Printing Uninitialized Floats:\n%f\n%f\n%f\n",
		pi, golden_ratio, long_var
	);

	return 0;
}

/*
// no pattern detected: it seems all uninitialized variables are 0
// or null by defualt
*/