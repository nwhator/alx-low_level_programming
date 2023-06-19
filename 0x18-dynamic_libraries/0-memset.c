#include "main.h"

/**
 * *_memset - Entry point
 * Description: Fills memory with a constant byte
 * @s: Character
 * @b: Character
 * @n: Integer
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
