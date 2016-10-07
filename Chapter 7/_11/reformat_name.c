#include <stdio.h>

/*
Write a program that takes a first name and last name entered by the user
and displays the last name, a comma, and the first initial, followed by
a period. User input can contain extra spaces before the first name, between
the first and last names, and after the last name.
*/

int main(void)
{
	char first_initial, ch;

	printf("Enter first and last name: ");

	scanf(" "); // take all space characters out of buffer
	first_initial = getchar(); // get first, non-space character
	while ((ch = getchar()) != ' '); // skip rest of first name until there is a space character
	scanf(" "); // take all space characters out of buffer after the statement above skips to the next space character

	while((ch = getchar()) != '\n' && ch != ' ') {
		putchar(ch); // only output the character if it is not a newline or space character
	}

	printf(", %c", first_initial);

	return 0;
}