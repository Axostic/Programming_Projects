#include <stdio.h>

#define DAYS_IN_A_MONTH 30;
#define HOURS_IN_A_DAY 24;

/*
Using the array of Exercise 8, write a program fragment that computes the
average temperature for a month (averaged over all the days of the month and
all hours of the day).
*/

int main(void)
{
    int temperature_readings[DAYS_IN_A_MONTH][HOURS_IN_A_DAY], total_temperature = 0, average_temperature, hour, day;

    for(day = 0; day < DAYS_IN_A_MONTH; day++)
    {
        for(hour = 0; hour < HOURS_IN_A_DAY; hour++)
            total_temperature += temperature_readings[day][hour];
    }

    average_temperature = total_temperature / (HOURS_IN_A_DAY*DAYS_IN_A_MONTH);

    return 0;
}
