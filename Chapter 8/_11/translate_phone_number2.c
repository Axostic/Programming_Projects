#include <stdio.h>
#include <ctype.h>

#define LARGEST_PHONE_NUMBER 15

/*
Modify Programming Project 4 from Chapter 7 so that the program labels its output:
Enter Phone Number: 1-800-COL-LECT
In Numeric Form: 1-800-265-5328
The program will need to store the phone number (either in its original form or in
its numeric form) in an array of characters until it can be printed. You may assume
that the phone number is no more than 15 characters long.
*/

int main(void)
{
	int current_index = 0;
	char ch, phone_number[LARGEST_PHONE_NUMBER] = {' '};

	printf("Enter Phone Number: ");
	while((ch = toupper(getchar())) != '\n') {
		switch(ch) {
            case 'A': case 'B': case 'C': phone_number[current_index++] = '2'; break;
            case 'D': case 'E': case 'F': phone_number[current_index++] = '3'; break;
            case 'G': case 'H': case 'I': phone_number[current_index++] = '4'; break;
            case 'J': case 'K': case 'L': phone_number[current_index++] = '5'; break;
            case 'M': case 'N': case 'O': phone_number[current_index++] = '6'; break;
            case 'P': case 'R': case 'S': phone_number[current_index++] = '7'; break;
            case 'T': case 'U': case 'V': phone_number[current_index++] = '8'; break;
            case 'W': case 'X': case 'Y': phone_number[current_index++] = '9'; break;
            default: phone_number[current_index++] = ch; break;
        }
	}

	printf("In Numeric Form: ");
	for(current_index = 0; current_index < LARGEST_PHONE_NUMBER; current_index++)
		putchar(phone_number[current_index]);

	return 0;
}