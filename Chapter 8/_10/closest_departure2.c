#include <stdio.h>
#include <stdlib.h>

#define FLIGHTS 8
#define STD_TIME_FIX 12
#define MINUTES_IN_AN_HOUR 60

/*
Modify Programming Project 8 from Chapter 5 so that the departure times are stored
in an array and the arrival times are stored in a second array. (The times are
integers, representing the number of minutes since midnight.) The program will use
a loop to search the array of departure times for the one closest to the time entered
by the user.
*/

int main(void)
{
	int hours, minutes, since_midnight, previous, current, flight_number, arrival_hour, arrival_minutes, departure_hour, departure_minutes;
	char indicator = 'A';

	const int departure_times[FLIGHTS] = {480, 583, 679, 767, 840, 945, 1140, 1305},
			arrival_times[FLIGHTS] = {615, 712, 811, 900, 968, 1075, 1280, 1438};

	printf("\n   AVAILABLE  FLIGHTS\n");
	printf("\n Departure\tArrival\n");
    printf("------------------------\n");
    printf(" 8:00 AM    \t10:15 AM\n");
    printf(" 9:43 AM    \t11:52 AM\n");
    printf("11:19 AM    \t 1:31 PM\n");
    printf("12:47 PM    \t 3:00 PM\n");
    printf(" 2:00 PM    \t 4:08 PM\n");
    printf(" 3:45 PM    \t 5:55 PM\n");
    printf(" 7:00 PM    \t 9:20 PM\n");
    printf(" 9:45 PM    \t11:58 PM\n\n");

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);

	since_midnight = hours * MINUTES_IN_AN_HOUR + minutes;

	previous = abs(since_midnight - departure_times[0]);
	for(flight_number = 1; flight_number < FLIGHTS; flight_number++)
	{
		current = abs(since_midnight - departure_times[flight_number]);
		if(current > previous)
			break;
		previous = current;
	}

	departure_hour = departure_times[flight_number-1] / MINUTES_IN_AN_HOUR;
	arrival_hour = arrival_times[flight_number-1] / MINUTES_IN_AN_HOUR;
	departure_minutes = departure_times[flight_number-1] % MINUTES_IN_AN_HOUR;
	arrival_minutes = arrival_times[flight_number-1] % MINUTES_IN_AN_HOUR;

	if(departure_hour > STD_TIME_FIX)
	{
		indicator = 'P';
		departure_hour -= STD_TIME_FIX;
	}

	printf("Closest Departure Time: %.2d:%.2d %c.M.\n",  departure_hour, departure_minutes, indicator);

	if(arrival_hour > STD_TIME_FIX)
	{
		indicator = 'P';
		arrival_hour -= STD_TIME_FIX;
	}
	else
		indicator = 'A';

	printf("Closest Arrival Time: %.2d:%.2d %c.M.\n", arrival_hour, arrival_minutes, indicator);

	return 0;
}