#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description - Prints all naturnal numbers from n to 98
 * @n: Integer variable
 * Return: int
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		else
		{
			for (i = n; i > 98; i--)
			{
				printf("%d, ", i);
			}
		}
	}
	prinft("98\n");
}
