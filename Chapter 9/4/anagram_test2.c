#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LETTERS_IN_ALPHABET 26

/*
Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
main will call read_word twice, once for each of the two words entered by the user. As it
reads a word, read_word will use the letters in the word to update the counts array, as described
in the original project. (main will delcare two arrays, one for each word. These arrays are used
to track how many times each letter occurs in the words.) main will then call equal_array, passing
it the two arrays. equal_array will return true if the elements in the two arrays are identical
(indicating that the words are anagrams) and false otherwise.
*/

void read_word(int counts[LETTERS_IN_ALPHABET]);
bool equal_array(int counts1[LETTERS_IN_ALPHABET], int counts2[LETTERS_IN_ALPHABET]);

int main(void)
{
	int count1[LETTERS_IN_ALPHABET] = {0}, count2[LETTERS_IN_ALPHABET] = {0};

	printf("Enter first word: ");
	read_word(count1);
	printf("Enter second word: ");
	read_word(count2);

	if(equal_array(count1, count2))
		printf("The words are anagrams!");
	else
		printf("The words are NOT anagrams.");

	return 0;
}

void read_word(int counts[LETTERS_IN_ALPHABET])
{
	char current_letter;

	while((current_letter = tolower(getchar())) != '\n')
		if(isalpha(current_letter))
			counts[current_letter - 'a']++;
}

bool equal_array(int counts1[LETTERS_IN_ALPHABET], int counts2[LETTERS_IN_ALPHABET])
{
	for(int i = 0; i < LETTERS_IN_ALPHABET; i++)
		if(counts1[i] != counts2[i])
			return false;

	return true;
}