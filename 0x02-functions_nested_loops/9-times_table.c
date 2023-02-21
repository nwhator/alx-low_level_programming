#include "main.h"

/**
 * times_table - Entry Point
 * Description: Prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, ans;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i * j;
			if (j == 0)
			{
				_putchar(' ');
			}
			else if (ans < 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
