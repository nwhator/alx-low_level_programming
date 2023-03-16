#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Entry point
 * Description: Allocates memory using malloc
 * @b: Integer
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	/* Locate memory of size b using malloc */

	if (ptr == NULL) /* Check if malloc failed */
	{
		exit(98); /* If malloc failed, terminate the program with exit status 98 */
	}
	return (ptr);
}
