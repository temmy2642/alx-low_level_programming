#include <stdlib.h>
#include "main.h"
/**
* create_array - main function
* @size: parameter1
* @c: parameter2
* Return: returns arr
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return NULL;
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return arr;
}
