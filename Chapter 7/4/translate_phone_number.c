#include <stdio.h>

/*
Write a program that translates an alphabetic phone number into numeric form.
Leave digits and punctiation.
You may assume any letters entered by the user are in upper-case.
*/

int main(void)
{
	char ch;

	printf("Enter phone number to convert: ");
	while((ch = getchar()) != '\n') {
		switch (ch) {
            case 'A': case 'B': case 'C':
                printf("2");
                break;
            case 'D': case 'E': case 'F':
                printf("3");
                break;
            case 'G': case 'H': case 'I':
                printf("4");
                break;
            case 'J': case 'K': case 'L':
                printf("5");
                break;
            case 'M': case 'N': case 'O':
                printf("6");
                break;
            case 'P': case 'R': case 'S':
                printf("7");
                break;
            case 'T': case 'U': case 'V':
                printf("8");
                break;
            case 'W': case 'X': case 'Y':
                printf("9");
                break;
            default:
                putchar(ch);
        }
	}

	return 0;
}