#include <stdio.h>
#include <stdbool.h>

/*
Write a program that prompts the user to enter two dates
and then indicates what date comes earlier.
*/

int main(void)
{
	int month1, day1, year1, month2, day2, year2;
	bool first_is_earlier = false;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);

	if(year1 < year2) 
		first_is_earlier = true;
	
	if(year1 == year2) {
		if(month1 < month2)
			first_is_earlier = true;
		else if(month1 == month2)
			if(day1 < day2)
				first_is_earlier = true;
	}

	if(first_is_earlier)
		printf("%d/%d/%.2d comes earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
	else
		printf("%d/%d/%.2d comes earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);

	return 0;
}