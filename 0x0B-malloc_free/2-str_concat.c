#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * Description: Concatenates two strings
 * @s1: Character
 * @s2: Character
 * Return: Char
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0, i, j = 0;
	char *ans;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	ans = malloc((len) * sizeof(char));
	/* Allocates memory for the ans string */
	if (ans == NULL)
	{
		return (NULL); /* Allocation failed */
	}
	for (i = 0; s1[i]; i++)
	{
		ans[j++] = s1[i];
	} /* Copies contents of s1 to the ans string */
	for (i = 0; s2[i]; i++)
	{
		ans[j++] = s2[i];
	} /* Copies contents of s2 to the ans string */
	return (ans);
}
