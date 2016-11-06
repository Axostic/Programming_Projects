#include <stdio.h>
#include <stdbool.h>

#define MAX_CHARACTERS 1000

/*
Write a program that reverses the words in a letters.
*/

int main(void)
{
	int letter_count = 0, word_length = 0, start_letter, current_letter;
	char letters[MAX_CHARACTERS] = {0}, letter, terminating_char = '.';

    printf("Enter a sentence: ");

	for(current_letter = 0; ((letter = getchar()) != '\n') && (current_letter < MAX_CHARACTERS); current_letter++)
		switch(letter)
		{
			case '.': case '?': case '!': terminating_char = letter; break;
			default: letters[current_letter] = letter; letter_count++;
		}

	printf("Reversal of words in sentence: ");

	for(current_letter = letter_count - 1; current_letter >= 0; current_letter--)
	{
        if((letters[current_letter] == ' ') || (current_letter == 0))
        {
			if(current_letter == 0)
				current_letter--;

			for(start_letter = current_letter + 1; start_letter <= current_letter + word_length + 1; start_letter++)
				printf("%c", letters[start_letter]);
			word_length = 0;
        }
        else
        	word_length++;
	}

	printf("%c", terminating_char);

	return 0;
}