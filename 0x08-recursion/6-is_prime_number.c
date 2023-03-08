#include "main.h"

/**
 * is_divisible - Entry point
 * Description: Prime number
 * @n: Integer
 * @div: Integer
 * Return: 1 if prime number 0 otherwise
 */

int is_divisible(int n, int div)
{
	if (div == 1 || div == n)
	{
		return (0);
	}
	if (n % div == 0)
	{
		return (1);
	}
	return (is_divisible(n, div - 1));
}

/**
 * is_prime_number - Entry point
 * Description: Prime number
 * @n: Integer
 * Return: 1 if prime number 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n ==  2)
	{
		return (1);
	}
	return (!is_divisible(n, n - 1));
}
