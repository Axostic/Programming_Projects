#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int d, n;
	bool prime = true;

	printf("Enter number to check: ");
	scanf("%d", &n);

	/*
	for (d = 2; d < n; d++) {
		if(n % d == 0)
			prime = false;
	}
	*/

	for (d = 2; d*d <= n; d++) {
		if(n % d == 0)
			prime = false;
	}


	(prime) ? printf("%d is prime", n) : printf("%d is composite", n);

	return 0;
}