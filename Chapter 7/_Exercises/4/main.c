#include <stdio.h>

int main(void)
{
	/* If c is a char, what statements are illegal?
		i += c;	// i has type int	--	Legal
		c = 2 * c - 1;				--	Legal
		putchar(c);					--	Legal
		printf(c);					--	Illegal
	*/
	char c = '!';
	int i = 5;

	printf("%d\n", i += c);
	printf("%c\n", 2 * c - 1);
	putchar(c);
	// printf(c); printf doesn't work like this!

	return 0;
}