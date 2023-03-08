#include "main.h"

int_sqrt(int n);

/**
 * _sqrt - Entry point
 * Description: Natural square root
 * @n: Integer
 * Return: -1 if negative n if 0 or 1
 */

int _sqrt(int n)
{
	int x = _sqrt_recursion(n - 1) + 1;

	if (x * x > n)
	{
		return (x - 1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_sqrt_recursion(n - 1) + 1);
	}
}

/**
 * _sqrt_recursion - Entry point
 * Description: Natural square root
 * @n: Integer
 * Return: -1 if negative n if 0 or 1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n));
	}
}
