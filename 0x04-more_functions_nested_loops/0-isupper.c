#include "main.h"
/**
 * _isupper - main function that checks for upper case
 *
 * @c: parameter
 *
 * Return: returns 1 if true else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
