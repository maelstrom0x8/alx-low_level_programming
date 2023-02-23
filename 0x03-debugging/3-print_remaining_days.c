#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int _day, rem;

	_day = convert_day(month, day);
	if (year % 4 == 0 || !(year % 100 == 0) && year % 400 == 0)
	{
	if (month >= 2 && day >= 60)
	{
		rem = 366 - _day;
		printf("Day of the year: %d\n", _day);
		printf("Remaining days: %d\n", rem);
	}

	printf("Day of the year: %d\n", _day);
	printf("Remaining days: %d\n", rem);
	}
	else
	{
	if (month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		rem = 365 - _day;
		printf("Day of the year: %d\n", _day);
		printf("Remaining days: %d\n", rem);
	}
	}
}
