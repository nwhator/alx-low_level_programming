#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * Description: Initializes a variable of type struct dog
 * @d: Initialize
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if the input struct pointer is not null */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		/* Assign the provided values to the members of the struct */
	}
}
