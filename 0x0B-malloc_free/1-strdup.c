#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * Description: Returns pointer to a newly allocated space
 * @str: Charater
 * Return: char
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *copy;

	copy = malloc((len + 1) * sizeof(char));
	/* This allocates memory for the new string */
	if (str == NULL || copy == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
		/* This determines the length of the input string */
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
		/* This copies input string to the new string */
	}
	copy[len] = ('\0');
	return (copy);
}

