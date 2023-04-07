#include "main.h"

/**
 * _support - support function
 * @r: parameter
 * @lo: parameter
 * Return: returns square root
 */

int _support(int r, int lo)
{
	if (lo * lo == r)
		return (lo);
	else if (lo * lo > r)
		return (-1);
	else
		return (_support(r, lo + 1));
}


/**
* _sqrt_recursion - main function
* @n: parameter
* Return: sqauare root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_support(n, 1));
}
