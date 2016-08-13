#include <stdio.h>

int main(void)
{
	int i = 13, j = 2;
 	
	printf("%d", (-i)/j );	// Output: -10/2 -5???

	printf("%d", -(i/j) );	// Output: -(10/2)  -5

	// Given that I and J are always postitive integers, do (-i)/j and -(i/j) always have the same value?
	// Yes

	
	return 0;
}