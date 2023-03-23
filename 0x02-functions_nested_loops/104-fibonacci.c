#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma and a space, followed by a newline.
*
* Return: Always 0.
*/
	int main(void)
{
	int i, first = 1, second = 2, next;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		printf("%d", next);

		if (i != 98)
		{
			printf(", ");
		}

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
