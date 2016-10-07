#include <stdio.h>
#include <ctype.h>

#define CONVERSION_ADDEND 12

/*
Write a program that asks the user for a 12-hour time, then displays
the time in 24-hour format.
*/

int main(void)
{
	int hours, minutes, m_hours = 0;
	char indicator;

	printf("Enter the 12-hour format time: ");
	scanf("%d : %d ", &hours, &minutes);
	indicator = toupper(getchar());

	if(indicator == 'P') { // Afternoon (p.m.)
		(hours != 12) ? (m_hours = hours + CONVERSION_ADDEND) : (m_hours = 12);
	}
	if(indicator == 'A' && hours != 12) { // Morning (a.m.)
		m_hours = hours;
	}

	printf("Equivalent 24-hour time: %.2d:%.2d", m_hours, minutes);

	return 0;
}