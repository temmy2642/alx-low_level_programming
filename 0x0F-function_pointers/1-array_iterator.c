#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function on each element of an array
* @array: parameter1
* @size: parameter2
* @action: parameter3
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
