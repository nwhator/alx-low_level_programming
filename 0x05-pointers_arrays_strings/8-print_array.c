#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * Description: Prints n elements of an array of integers
 * @a: Integer
 * @n: Integer
 * Return: int
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
