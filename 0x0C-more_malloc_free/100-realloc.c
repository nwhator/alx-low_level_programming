#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Entry point
 * Description: Reallocates memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: Pointed to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size is zero and ptr is not NULL, free memory and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	/* If new_size is equal to old_size, do not do anything and return ptr */
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* Allocate new memory block with new_size */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/* Copy the contents from the old block to the new block */
	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}
	free(ptr);
	return (new_ptr);
}

