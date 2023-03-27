#include "main.h"
/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;

	n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	while (str[n] != '\0')
		_putchar(str[n++]);

	_putchar('\n');
}
