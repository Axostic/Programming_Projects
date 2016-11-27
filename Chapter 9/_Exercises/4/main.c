#include <stdio.h>

int day_of_year(int month, int day, int year)
{
	int days = 0;
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for(int i = 1; i < month; i++)
	{
		days += days_in_month[i - 1];
	}

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2) // quickfix for leap years
	{
    	days++;
	}

	return days + day;
}

int main(void)
{
	int m = 2, d = 26, y = 2016;

	printf("Day of the year: %d", day_of_year(m, d, y));

	return 0;
}