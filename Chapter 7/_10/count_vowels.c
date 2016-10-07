#include <stdio.h>
#include <ctype.h>

/*
Write a program that counts the number of vowels (a, e, i, o, u)
in a sentence.
*/

int main(void)
{
	int vowel_num = 0;
	char ch;

	printf("Enter the sentence: ");

	while((ch = getchar()) != '\n') {
		switch(toupper(ch)) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				vowel_num++;
				break;
		}
	}

	printf("The sentence had a total of %d vowels.\n", vowel_num);

	return 0;
}