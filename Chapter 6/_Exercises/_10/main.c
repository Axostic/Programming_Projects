#include <stdio.h>

int main(void)
{
	// Show how to replace a continue statement by an equivalent goto statement

	for(int i = 1; i <= 10; i++) { // using continue
		if (i == 7)
			continue;
		printf("%d ", i);
	}

	printf("\n");

	for(int i = 1; i <= 10; i++) { // using goto
		if(i == 7)
			goto end_of_loop;
		printf("%d ", i);
		end_of_loop: ;
	}

	return 0;
}