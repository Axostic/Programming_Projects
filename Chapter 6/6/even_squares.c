#include <stdio.h>

/*
Write a program that promps a user to enter a number n and
prints all even squares between 1 and n.
*/

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Even squares between 1 and %d:\n", n);
	for (int i = 2; i*i <= n; i += 2) {
			printf("%d\n", i*i);
	}

	return 0;
}