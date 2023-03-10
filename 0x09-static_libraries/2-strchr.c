#include "main.h"

/**
 * *_strchr - Entry point
 * Description: Locates a character in a string
 * @s: Character
 * @c: Character
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
