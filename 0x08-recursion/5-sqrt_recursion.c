#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * Description: Natural square root
 * @n: Integer
 * Return: -1 if negative n if 0 or 1
 */

int _sqrt_recursion(int n)
{
	int low, i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	low = 0;
	i = n;

	while (low <= i)
	{
		int root = (low + i) / 2;

		if (root * root == n)
		{
			return (root);
		}
		else if (root * root < n)
		{
			low = root + 1;
		}
		else
		{
			i = root - 1;
		}
	}
	return (-1);
}
