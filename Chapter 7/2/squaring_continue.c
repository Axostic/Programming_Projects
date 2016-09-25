#include <stdio.h>

/*
Modify square2.c of Section 6.3 so that it pauses after every 24 squares
the following message is displayed to the user:
"Press Enter to continue..."
Use getchar as it will 'pause' a program until the user hits the enter key.
*/

int main(void)
{
	int i, n;
	char ch;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	getchar();

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, i * i);

		if (i % 24 == 0) {
			printf("Press Enter to continue...");
			getchar();
		}
	}

	return 0;
}