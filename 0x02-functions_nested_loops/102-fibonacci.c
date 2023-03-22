#include <stdio.h>
/**
 * print_fibonacci - prints the first n
 *
 * @n: parameter
 *
 * main - entry point
 *
 * Return: always 0
 */

void print_fibonacci(int n)
{
	int i, first = 1, second = 2, next;

	printf("%d, %d, ", first, second);
	for (i = 3; i <= ; i++)
	{
		next = first + second;
		printf("%d", next);
		if (i != n)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
}

int main(void)
{
	print_fibonacci(50);
	return (0);
}
