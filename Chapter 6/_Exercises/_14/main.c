#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	/*
	if (n % 2 == 0);
		printf("n is even\n");
	*/

	if (n % 2 == 0)
		printf("n is even\n");

	return 0;
}