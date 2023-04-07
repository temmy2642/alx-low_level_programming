#include "main.h"

/**
* is_p_helper - helper function
* @n: the parameter
* @i: the parameter
*
* Return: 1 if the number is prime, otherwise 0
*/
int is_p_helper(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_p_helper(n, i + 1));
}

/**
* is_prime_number - checks if a number is prime
* @n: the parameter
*
* Return: 1 if a prime number, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_p_helper(n, 2));
}
