#include "main.h"

/**
 * _isupper - Entry point
 * Description: Checks for uppercase character
 * @c: Integer variable
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
