#include <stdio.h>
#include <ctype.h>

#define LETTERS_IN_ALPHABET 26

/*
Write a program that tests whether two words are anagrams (permutations of the same
letters):
*/

int main(void)
{
	char current_letter;
	int current_index, letter_count[LETTERS_IN_ALPHABET] = {0};

	printf("Enter first word: ");
	while((current_letter = tolower(getchar())) != '\n')
		if(isalpha(current_letter))
			letter_count[current_letter - 'a']++;

	printf("Enter second word: ");
	while((current_letter = tolower(getchar())) != '\n')
		if(isalpha(current_letter))
			letter_count[current_letter - 'a']--;

	for(current_index = 0; current_index < LETTERS_IN_ALPHABET; current_index++)
		if(letter_count[current_index] != 0)
		{
			printf("The words are not anagrams.");
			return 0;
		}

	printf("The words are anagrams!");

	return 0;
}