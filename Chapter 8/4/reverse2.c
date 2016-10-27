#include <stdio.h>

#define N 10
#define N_LENGTH ((int)(sizeof(a)/sizeof(a[0])))

/*
Modify the reverse.c program of Section 8.1 to use
the expression (int)(sizeof(a) / sizeof(a[0]))
(Or use a macro with this value) for the array
length.
*/

int main(void)
{
	int a[N], i;

	printf("Enter %d numbers: ", N);
	for(i = 0; i < N_LENGTH; i++)
		scanf("%d", &a[i]);

	printf("In reverse order:");
	for(i = N_LENGTH - 1; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}