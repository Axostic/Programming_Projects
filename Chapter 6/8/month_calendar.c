#include <stdio.h>

/*
Write a program that prints a one-month calendar. User specifies
how many days in the month and the day of the week in which the
month begins.
*/

int main(void)
{
	int days_in_month, starting_day, day_of_week;

	printf("Enter the number of days in the month: ");
	scanf("%d", &days_in_month);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_day);

	printf("\n");

	printf("  Su   M  Tu   W  Th   F  Sa\n");
	printf("============================\n");

	for(day_of_week = 1; day_of_week < starting_day; day_of_week++)
			printf("    ");

	for(int day = 1, day_of_week = starting_day; day <= days_in_month; day++, day_of_week++) {

		if(day_of_week == 8) {
			printf("\n");
			day_of_week = 1;
		}
		else {
			printf("%4d", day);
		}
		
	}

	return 0;
}