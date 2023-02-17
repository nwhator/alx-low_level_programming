#include <stdio.h>

/**
 * main - Entry point
 * Description - Smile in which mirror?
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
