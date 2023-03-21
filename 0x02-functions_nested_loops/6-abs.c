#include "main.h"

/**
 * _abs - the function
 *
 * @a: the parameter
 *
 * Return: returns a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
