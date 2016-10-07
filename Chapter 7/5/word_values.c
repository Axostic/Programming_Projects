#include <stdio.h>
#include <ctype.h>

/*
Write a program that computes the value of a word by summing the
values of its letters (using scrabble face-values).
*/

int main(void)
{
	char ch;
	int value = 0;

	printf("Enter the word: ");

	while((ch = getchar()) != '\n')
	{
		switch(toupper(ch))
		{
			case 'D': case 'G':
				value += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				value += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				value += 4;
				break;
			case 'K':
				value += 5;
				break;
			case 'J': case 'X':
				value += 8;
				break;
			case 'Q': case 'Z':
				value += 10;
				break;
			default: // every other character other than those above? Add one.
				value += 1;
				break;
		}
	}

	printf("Value: %d", value);

	return 0;
}