#include <stdio.h>

/**
 * main - this is the loop to print lowercase letters
 *
 * Return: return is 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
