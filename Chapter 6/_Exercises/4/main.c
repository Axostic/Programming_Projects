#include <stdio.h>

int main(void)
{
	/*
	(a) for (i = 0; i < 10; i++) ...
	(b) for (i = 0; i < 10; ++i) ...
	(c) for (i = 0; i++ < 10)    ...

	(a) and (b) are equivalent.
	*/

	int i;

	for (i = 0; i < 10; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("%d ", i);
	printf("\n");
	for (i = 0; i++ < 10;) 
		printf("%d ", i);

	return 0;
}