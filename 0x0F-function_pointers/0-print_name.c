#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Entry point
 * Description: Prints a name.
 * @name: The name to print.
 * @f: A function that takes a character pointer argument and returns void.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
		/* Call the function pointer f with the argument name */
	}
}
