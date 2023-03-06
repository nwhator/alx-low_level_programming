#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: Integer
 * @size: Integer
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
		/* Add the diagonal element from top-left to bottom-right */
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
		/* Add the diagonal element from top-right to bottom-left */
	}
	printf("%d, %d\n", sum1, sum2);
}
