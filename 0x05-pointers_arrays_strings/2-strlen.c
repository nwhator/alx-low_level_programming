#include "main.h"

/**
 * _strlen - Entry point
 * Description: Length of string
 * @s: Integer
 * Return: int
 */

int _strlen(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
