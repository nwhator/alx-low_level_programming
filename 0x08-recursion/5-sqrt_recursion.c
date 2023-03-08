#include "main.h"

/**
 * _sqrt - Entry point
 * Description: Natural square root
 * @n: Integer
 * @x: Integer
 * Return: -1 if negative n if 0 or 1
 */

int _sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if (x == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - Entry point
 * Description: Natural square root
 * @n: Integer
 * Return: -1 if negative n if 0 or 1
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, x));
}
