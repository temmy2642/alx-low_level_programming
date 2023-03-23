#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest_factor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			if (factor > largest_factor)
				largest_factor = factor;
			num /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", largest_factor);
	return (0);
}
