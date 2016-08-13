#include <stdio.h>

/*
Write a program that converts a two-digit
number to english.
*/

int main(void)
{
	int num1, num2;

	printf("Enter the two-digit number: ");
	scanf("%1d%1d", &num1, &num2);

	printf("You entered the number ");

	if(num1 != 1) {
		switch(num1) {
			case 1: printf("ten"); break;
			case 2: printf("twenty"); break;
			case 3: printf("thirty"); break;
			case 4: printf("fourty"); break;
			case 5: printf("fifty"); break;
			case 6: printf("sixty"); break;
			case 7: printf("seventy"); break;
			case 8: printf("eighty"); break;
			case 9: printf("ninety"); break;
		}
		switch(num2) {
			case 1: printf("-one"); break;
			case 2: printf("-two"); break;
			case 3: printf("-three"); break;
			case 4: printf("-four"); break;
			case 5: printf("-five"); break;
			case 6: printf("-six"); break;
			case 7: printf("-seven"); break;
			case 8: printf("-eight"); break;
			case 9: printf("-nine"); break;
		}
	}
	else {
		if(num1 == 1 && num2 == 0)
			printf("ten");
		switch(num2) {
			case 1: printf("eleven"); break;
			case 2: printf("twelve"); break;
			case 3: printf("thirteen"); break;
			case 4: printf("fourteen"); break;
			case 5: printf("fifteen"); break;
			case 6: printf("sixteen"); break;
			case 7: printf("seventeen"); break;
			case 8: printf("eighteen"); break;
			case 9: printf("nineteen"); break;
		}
	}

	printf(".");

	return 0;
}