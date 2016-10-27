#include <stdio.h>
#include <ctype.h>

#define LARGEST_MESSAGE_LENGTH 100

/*
Write a "B1FF filter" that reads a message entered by the user
and translates it into B1FF-speak.
*/

int main(void)
{
	int i;
	char current_letter, letters[LARGEST_MESSAGE_LENGTH] = {0};

	printf("Enter a message: ");

	for(i = 0; i < LARGEST_MESSAGE_LENGTH && (current_letter = getchar()) != '\n'; i++)
		letters[i] = toupper(current_letter);

	printf("B1FF-Speak:      ");

	for(i = 0; i < LARGEST_MESSAGE_LENGTH; i++)
	{
		switch(letters[i])
		{
			case 'A':
				putchar('4');
				break;
			case 'B':
				putchar('8');
				break;
			case 'E':
				putchar('3');
				break;
			case 'I':
				putchar('1');
				break;
			case 'O':
				putchar('0');
				break;
			case 'S':
				putchar('5');
				break;
			case 0:
				printf("!!!!!!!!!!!!\n");
				return 0;
			default:
				putchar(letters[i]);
				break;
		}
	}

	return 0;
}