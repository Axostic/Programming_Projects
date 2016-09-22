#include <stdio.h>

int main(void)
{
	/* Legal types or no?
		short unsigned int	--	Legal, short is an integer type and therefore can also have the unsigned type.
		short float			--	Illegal, floats cannot be 'short'
		long double			--	Legal, doubles CAN be 'long'
		unsigned long		--	Legal, Long is an integer type and therefore can also have the unsigned type
	*/
	short unsigned int test1 = 200;
	printf("%d\n", test1);

	//short float test2 = 35.2f;  !! Error !!

	long double test3 = 50003.3;
	printf("%Lf\n", test3);

	unsigned long test4 = 20402;
	printf("%lu\n", test4);

	return 0;
}