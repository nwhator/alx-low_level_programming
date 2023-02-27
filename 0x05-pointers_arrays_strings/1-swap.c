#include "main.h"

/**
 * swap_int - Entry [point
 * Description: Swaping integers
 * @a: Integer
 * @b: Integer
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int digit = *a;
	*a = *b;
	*b = digit;
}
