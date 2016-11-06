#include <stdio.h>
#include <ctype.h>

#define LETTERS_IN_ALPHABET 26

/*
Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of the
letters are stored in an array. The array will have 26 elements, corresponding
to the 26 letters of the alphabet. For example, element 0 of the array will
store 1 (because the SCRABBLE value of the letter A is 1), the element 1 of the
array will store 3 (because the SCRABBLE value of the letter B is 3), and so
forth. As each character of the input word is read, the program will use the
array to determine the SCRABBLE value of that character. Use an array initializer
to setup the array.
*/

int main(void)
{
	char ch;
	int value = 0;

	const int letter_values[LETTERS_IN_ALPHABET] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
													1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	printf("Enter the word: ");

	while((ch = toupper(getchar())) != '\n')
		value += letter_values[ch - 'A'];

	printf("Value: %d", value);

	return 0;
}