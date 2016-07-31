#include <stdio.h>

/*
Write a program that reformats a phone number using dots as the delimiter
*/

int main(void)
{
	int area_code, prefix, line;

	printf("Enter a phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &prefix, &line);

	printf("You entered %d.%d.%d", area_code, prefix, line);

	return 0;
}