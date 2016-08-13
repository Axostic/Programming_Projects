#include <stdio.h>

/*
Write a program that converts 24-hour form to 12-hour form.
*/

int main(void)
{
	int mil_hour = 0, minutes = 0;

	printf("Enter a 24-hour time, seperated by semicolons: ");
	scanf("%d:%d", &mil_hour, &minutes);

	printf("Equivalent 12-hour time: %d:%.2d %s",
		((mil_hour + 11) % 12) + 1,
		minutes,
		(mil_hour > 0 && mil_hour < 12 ? "AM" : "PM") 
	);

	return 0;
}