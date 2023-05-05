#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	mask <<= (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
	}
}
