#include <stdio.h>

int main(void)
{
	/* Which of the following is not a legal way to write the number 65? Assume character set is ASCII
		'A'			-- Legal
		0b1000001	-- Legal, as long as the compiler provides binary extensions.
		0101		-- Legal
		0x41		-- Legal
	*/

	printf("%d\n", 'A');
	printf("%d\n", 0b1000001);
	printf("%d\n", 0101);
	printf("%d\n", 0x41);

	return 0;
}