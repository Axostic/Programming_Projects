#include <stdio.h>

/*
Write a program that gives a description based on the
wind speed that a user can enter.
*/

int main(void)
{
	float wind_speed;

	printf("Enter Wind Speed in Knots: ");
	scanf("%f", &wind_speed);

	printf("A Wind Speed of %.2f knot(s) indicates a ", wind_speed);

	if (wind_speed < 1.00f)
		printf("Calm condition");
	else if (wind_speed <= 3.00f)
		printf("Light Air condition");
	else if (wind_speed <= 27.00f)
		printf("Breeze");
	else if (wind_speed <= 47.00f)
		printf("Gale");
	else if (wind_speed <= 63.00f)
		printf("Storm");
	else
		printf("Hurricane");

	return 0;
}