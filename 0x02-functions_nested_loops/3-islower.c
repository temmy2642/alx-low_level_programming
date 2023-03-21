#include "main.h"
/**
 * _islower - returns 1 or 0
 *
 *@c: parameter to be printed
 *
 * Return: 1 if lowercase and 0 if not true
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
