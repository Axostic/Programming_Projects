#include <stdio.h>
#include <stdbool.h>

/*
Write a program that tells the user the closest flight
available from the time they entered.
*/

int main(void)
{
	int hours, minutes, midnight, departure_hour = 0,
	departure_minutes = 0, arrival_hour = 0, arrival_minutes = 0;
	bool departure_morning = false, arrival_morning = false;

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

	midnight = hours * 60 + minutes;

	if (midnight <= ((8 * 60) + (103 / 2))) {
    	departure_hour = 8; arrival_hour = 10; arrival_minutes = 16; departure_morning = true; arrival_morning = true;
	}
    else if (midnight < ((9 * 60) + 43) + (96 / 2)) {
    	departure_hour = 9; departure_minutes = 43; arrival_hour = 11; arrival_minutes = 52; departure_morning = true; arrival_morning = true;
    }
    else if (midnight < ((11 * 60) + 19) + (88 / 2)) {
        departure_hour = 11; departure_minutes = 19; arrival_hour = 1; arrival_minutes = 31; departure_morning = true;
    }
    else if (midnight <= ((12 * 60) + 47) + (73 / 2)) {
    	departure_hour = 12; departure_minutes = 47; arrival_hour = 3; arrival_minutes = 0;
    }
    else if (midnight <= ((14 * 60) + (105 / 2))) {
    	departure_hour = 2; departure_minutes = 0; arrival_hour = 4; arrival_minutes = 8;
    }
    else if (midnight <= ((15 * 60) + 45) + (195 / 2)) {
    	departure_hour = 3; departure_minutes = 45; arrival_hour = 5; arrival_minutes = 55;
    }
    else if (midnight <= ((19 * 60) + (165 / 2))) {
    	departure_hour = 7; departure_minutes = 0; arrival_hour = 9; arrival_minutes = 20;
    }
    else {
    	departure_hour = 9; departure_minutes = 45; arrival_hour = 11; arrival_minutes = 58;
    }
	

	printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s.",
		departure_hour, departure_minutes, (departure_morning ? "a.m." : "p.m."),
		arrival_hour, arrival_minutes, (arrival_morning ? "a.m." : "p.m.")
	);

	return 0;
}