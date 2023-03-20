#include <stdio.h>

/**
 * main - this prints the alaphabets in lower and upper case
 *
 * Return: is always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
