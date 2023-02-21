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
				_putchar('0');
			}
			else if (ans < 0)
			{
				_putchar(' ');
				_putchar(ans + '0');
			}
			else
			{
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}