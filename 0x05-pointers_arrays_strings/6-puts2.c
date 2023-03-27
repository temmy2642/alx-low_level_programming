#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: the input string
*/
void puts2(char *str)
{
	int len = 0, i;
	char *ptr = str;

	while (*ptr)
	{
		len++;
		ptr++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
