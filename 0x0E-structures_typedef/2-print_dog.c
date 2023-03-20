#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * Description: Prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	/* Check if the input struct pointer is not null */
	if (d != NULL)
	{
		/* Print the name, or "(nil)" if it is null */
		printf("Name: ");
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}
		/* Print the age, or "(nil)" if it is null */
		printf("Age: ");
		if (d->age >= 0)
		{
			printf("%f\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}
		/* Print the owner, or "(nil)" if it is null */
		printf("Owner: ");
		if (d->owner != NULL)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
