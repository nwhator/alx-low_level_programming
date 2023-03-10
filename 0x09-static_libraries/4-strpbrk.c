#include "main.h"

/**
 * _strpbrk - Entry point
 * Description: Searches a string for any of a set of bytes
 * @s: Character
 * @accept: Character
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
