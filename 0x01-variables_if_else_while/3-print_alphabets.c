#include <stdio.h>

/**
 * main - this prints the alphabets upper and lower
 *
 * Return: thge return is 0
 */

int main(void)
{
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
