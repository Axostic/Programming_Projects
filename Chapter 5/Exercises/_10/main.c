#include <stdio.h>

int main(void)
{
	int i;

	/*
	A remainder operation where the right operand is greater
	than the left is equal to the left operand. In this case,
	the expression inside switch evaluates to one. Since there
	are no break statements inside the switch, the program will
	output "onetwo". To fix this, add a break statement after each
	printf call to ensure further cases are not executed.
	*/

	i = 1;
	switch(i % 3) {
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}

	return 0;
}