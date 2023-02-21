#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - Prints the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
