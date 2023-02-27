#include "main.h"

/**
 * print_rev - Entry point
 * Description: Prints string in reverse
 * @s: Integer
 * Return: char
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
