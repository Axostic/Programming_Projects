#include <stdio.h>

int main(void)
{
	/*
	(a) while (i < 10) ...
	(b) for (; i < 10;) ...
	(c) do {...} while (i < 10);
	
	(a) and (b) are equivalent. However, in this example below, all the output
	is equal. The difference between (a)(b) and (c) is that (c) uses a do statement
	which runs the loop body before the controlling expression is evaluated, instead of after.
	*/

	int i = 0;

	while (i < 10)
		printf("%d ", ++i);

	printf("\n");
	i = 0;

	for (; i < 10;)
		printf("%d ", ++i);

	printf("\n");
	i = 0;

	do {
		printf("%d ", ++i);
	} while (i < 10);

	return 0;
}