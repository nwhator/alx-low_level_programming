#include "main.h"

/**
 * print_sign - Entry point
 * @n: Variable
 * Description: Prints the sign of a number
 * Return: 1 if +ve, 0 if 0, -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
