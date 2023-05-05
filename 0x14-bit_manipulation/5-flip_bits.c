#include "main.h"
/**
 * flip_bits - main function
 * @n: parameter1
 * @m: paraeter2
 *
 * Return: returns count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
