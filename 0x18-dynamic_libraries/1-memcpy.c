#include "main.h"

/**
 * *_memcpy - Entry point
 * Description: Copies memory area
 * @dest: Character
 * @src: Character
 * @n: Integer
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ans = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ans);
}
