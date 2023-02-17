#include <stdio.h>

/**
 * main - Entry point
 * Description - Really? Combination again! Three!!!
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
