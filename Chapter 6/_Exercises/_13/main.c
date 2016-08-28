#include <stdio.h>

int main(void)
{
	int m, n;

	printf("Enter Number: ");
	scanf("%d", &m);

	/*
	for (n = 0; m > 0; n++)
		m /= 2;
	*/

	for (n = 0; m > 0; n++, m /= 2);

	printf("%d", n);

	return 0;
}