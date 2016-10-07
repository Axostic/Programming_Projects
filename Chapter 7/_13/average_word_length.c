#include <stdio.h>

/*
Write a program that calculates the average word length
of a sentence. For simplicity, your program should
consider a punctuation mark to be part of the word to
which it is attached. Display the average word length
to one decimal place.
*/

int main(void)
{
	float average_word_length;
	int character_count = 0, word_count = 0;
	char ch;

	printf("Enter the sentence: ");

	while((ch = getchar()) != '\n')
	{
		switch(ch)
		{
			case ' ':
				word_count++; // increments word_count using space, but only for the word before the space.
				break;
			default:
				character_count++; // not a space? increment the total character count.
				break;
		}
	}
	word_count++; // Increments word_count because the last word wont (usually) have a space after

	average_word_length = character_count / (float)word_count; // find average word length.

	printf("Average word length of the above sentence: %.1f", average_word_length);

	return 0;
}