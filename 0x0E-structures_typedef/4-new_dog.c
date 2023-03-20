#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Entry point
 * Description: Create new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: A pointer to the new dog struct, or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocate memory for the new dog struct */
	dog_t *max = malloc(sizeof(dog_t));
	/* Max just a dog's name */
	/* Check if memory allocation failed */
	if (max == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for the name string */
	max->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (max->name == NULL)
	{
		free(max);
		return (NULL);
	}
	/* Allocate memory for the owner string */
	max->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (max->owner == NULL)
	{
		free(max->name);
		free(max);
		return (NULL);
	}

	/* Copy the name and owner strings to the new struct */
	strcpy(max->name, name);
	strcpy(max->owner, owner);
	/* Set the age of the new dog */
	max->age = age;

	return (max);
}

