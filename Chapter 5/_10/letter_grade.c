#include <stdio.h>

/*
Write a program that converts a numerical grade into
a letter grade. Use a switch statement.
*/

int main(void)
{
	int grade, dig1;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	printf("Letter Grade: ");

	dig1 = grade / 10;

	if(grade > 100 || grade < 0) {
		dig1 = -1;
	}

	switch(dig1) {
		case 0: 
		case 1:
		case 2: /* FALL THROUGH */
		case 3:
		case 4:
		case 5: printf("F"); break;
		case 6: printf("D"); break;
		case 7: printf("C"); break;
		case 8: printf("B"); break;
		case 9: /* FALL THROUGH */
		case 10: printf("A"); break;
		default: printf("???\nERROR: Please enter a grade between 0 and 100."); break;
	}

	return 0;
}