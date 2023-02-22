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

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		ans = i * j;
		for (j = 0; j <= n; j++)
		{
			_putchar(ans + '0');
		}
		_putchar('\n');
	}
}
