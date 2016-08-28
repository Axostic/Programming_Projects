#include <stdio.h>

int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 10; i++) {
		if(i % 2)
			continue;
		sum += i;
	}
	printf("%d\n", sum);

	// Outputs: 20

	return 0;
}