#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age;

	/*
	if (age >= 13)
		if (age <= 19)
			teenager = true;
		else
			teenager = false;
	else if (age < 13)
		teenager = false;

	Simplified version:
	if (age >= 13 && age <= 19)
		teenager = true;
	else
		teenager = false;

	Which can even be further simplified into a conditional if statement:

	teenager = (age >= 13 && age <= 19) ? true : false;
	*/

	age = 10;
	printf("%d\n", (age >= 13 && age <= 19) ? true : false);	// Outputs 0 (false)

	age = 16;
	printf("%d\n", (age >= 13 && age <= 19) ? true : false);	// Outputs 1 (true)

	return 0;
}