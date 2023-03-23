#include <stdio.h>
/**
 * main - main function
 *
 * Return: is 0
 */

	int main(void)
{
	int first = 1, second = 2, next, sum = 2;

	while (second <= 4000000)
	{

		next = first + second;
		first = second;
		second = next;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%d\n", sum);
	return (0);
}
