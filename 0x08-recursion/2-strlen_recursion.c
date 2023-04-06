#include "main.h"

/**
 * _strlen_recursion - will return the length of string
 * @s: pointer 
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
