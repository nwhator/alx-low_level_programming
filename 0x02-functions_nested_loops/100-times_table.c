#include "main.h"

/**
 * print_times_table - Entry point
 * Description - n Times table
 * @n: Integer variable
 * Return: int
 */

void print_times_table(int n)
{
	int i, j, ans;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ans = i * j;
				if (ans > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((ans / 100) + '0');
					_putchar(((ans / 10) % 10) + '0');
					_putchar((ans % 10) + '0');
				}
				else if (ans > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((ans / 10) % 10) + '0');
					_putchar((ans % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(ans + '0');
				}
			}
			_putchar('\n');
		}
	}
}
