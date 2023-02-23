#include <stdio.h>
#include "main.h"

/**
 * is_leapyear - takes a year and returns 1 if it is a leap year
 * or 0 if otherwise
 * @year: year
 * Return: int
 */

int is_leapyear(int year)
{
	return (year % 4 == 0 || !(year % 100 == 0) && year % 400 == 0);
}

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
	if (is_leapyear(year))
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
