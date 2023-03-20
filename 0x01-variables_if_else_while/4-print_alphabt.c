#include <stdio.h>

/**
 * main - prints all alpahbets but not q and e
 *
 * Return: the return is 0 
 *
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != q && !=e)
			putchar(i);
	putchar('\n');
	return (0);
}
