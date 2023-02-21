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
			if (j == 0)
			{
				_putchar('0');

			}
			else if (ans < 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + ' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens / 10 + '0');
				_putchar(unit % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
