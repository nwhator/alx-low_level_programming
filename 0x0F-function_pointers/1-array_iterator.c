#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * Description: executes a function on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function to execute on each element of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* !array || !action SAME AS array == NULL || action == NULL */
	if (!array || !action)
	{
		return;
		/* check if array and function pointer are valid */
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
		/* execute function on each element of array */
	}
}
