#include "main.h"
/**
* swap_int - swap the value
*
* @a: pointer1
* @b: pointer2
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
