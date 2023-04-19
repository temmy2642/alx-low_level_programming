#include "dog.h"
#include <stddef.h>
/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: pointer to name to set in struct dog
* @age: age to set in struct dog
* @owner: pointer to owner to set in struct dog
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
