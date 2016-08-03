#include <stdio.h>

int main(void)
{
	int i = 1, j = 2;

	printf("%d\n", i += j);		// Output: 3	(i = 3, j = 2)
	printf("%d\n", i--);		// Output: 3	(i = 2 after, j = 2)
	printf("%d\n", i * j / i);	// Output: 2	(i = 2, j = 2)
	printf("%d\n", i % ++j);	// Output: 2	(i = 2, j = 3. [NOTE: Shouldn't the output equal zero? Look into this.])
	
	return 0;
}