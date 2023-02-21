#include "main.h"

/**
 * print_last_digit - Entry point
 * Description - Print last digit of a number
 * @n: Integer
 * Return: int
 */

int print_last_digit(int n)
{
	int lst = n % 10;

	_putchar('%s', lst);
	return(lst);
}
