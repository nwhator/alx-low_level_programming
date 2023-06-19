#include "main.h"

/**
 * _puts - Entry point
 * Description: Prints a string to stdout
 * @str: String data type
 * Return: str
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
