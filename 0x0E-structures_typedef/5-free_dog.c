#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * Description: Frees memory allocated for a dog struct
 * @d: pointer to the dog struct to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	/* Check if the pointer is not NULL */
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
