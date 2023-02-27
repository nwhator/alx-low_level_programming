#include "main.h"

/**
 * puts_half - Entry point
 * Description: Prints half of a string
 * @str: Char
 * Return: char
 */

void puts_half(char *str)
{
	int len = 0;
	int n, i;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	n = (len - 1) / 2 + 1;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
