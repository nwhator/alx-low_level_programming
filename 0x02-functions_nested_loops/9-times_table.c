#include "main.h"

/**
 * times_table - Entry Point
 * Description: Prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, ans, tens, unit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i * j;
			tens = ans / 10;
			unit = ans % 10;
			if (ans < 0)
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0');

			}
			else
			{
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
