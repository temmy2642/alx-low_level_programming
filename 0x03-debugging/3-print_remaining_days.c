#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
*
* @month: month in number format
* @day: day of month
* @year: year
*
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
	int days;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 2)
		{
			days = day + (month - 1) * 30 + ((month - 1) / 2) - 2;
		}
		else if (month == 2 && day >= 60)
		{
			days = day + (month - 1) * 30 + ((month - 1) / 2) - 1;
		}
		else
		{
			days = day + (month - 1) * 30 + ((month - 1) / 2);
		}

		printf("Day of the year: %d\n", days);
		printf("Remaining days: %d\n", 366 - days);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			days = day + (month - 1) * 30 + ((month - 1) / 2);
			printf("Day of the year: %d\n", days);
			printf("Remaining days: %d\n", 365 - days);
		}
	}
}
