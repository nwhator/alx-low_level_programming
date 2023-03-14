#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Entry point
 * @ac: int
 * @av: Character
 * Description: concatenates all the arguments of your program
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++; /* add space for newline */
	}
	len++; /* add space for null terminator */
	str = malloc(len * sizeof(char));
	/* Allocate memory for the concatenated string */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Concatenate the strings */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index++] = av[i][j];
		}
		str[index++] = '\n';
	}
	str[index] = '\0';
	return (str);
}
