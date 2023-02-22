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

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			ans = i * j;
			if (j ==  0)
			{
				_putchar('0');
			}
			else if (ans < 10)
			{
				_putchar(' ');
			}
			else if (ans < 100)
			{
				_putchar(' ');
			}
			if (ans < 0)
			{
				_putchar(ans + '0');
			}
			else
			{
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
