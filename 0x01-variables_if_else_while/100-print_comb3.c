#include <stdio.h>

/**
 * main - Entry point
 * Description - Combinations of two digit
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\');
	}

	return (0);
}
