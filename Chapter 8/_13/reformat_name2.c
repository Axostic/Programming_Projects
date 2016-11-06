#include <stdio.h>

#define MAX_LASTNAME_LENGTH 20

/*
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
The program will need to store the last name (but not the first name) in an array
of characters until it can be printed. You may assume that the last name is no
more than 20 characters long.
*/

int main(void)
{
	int current_letter = 0;
	char first_initial, current_char, last_name[MAX_LASTNAME_LENGTH];

	printf("Enter first and last name: ");

	// Get the first initial and skip to last name.
	scanf(" ");
	first_initial = getchar();
	while (getchar() != ' ');
	scanf(" ");

	// Add each last name letter to the array.
	while((current_char = getchar()) != '\n' && current_char != ' ')
		last_name[current_letter++] = current_char;

	// Finally, print the first initial and last name.
	printf("You entered the name: ");
	for(int i = 0; i < current_letter; i++)
		printf("%c", last_name[i]);
	printf(", %c.", first_initial);

	return 0;
}