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
	int len1 = 0, len2 = 0, i;
	char *ans;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	} /* Treat string as empty if its NULL */
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	} /* Gets the length of each string */

	ans = malloc((len1 + len2 + 1) * sizeof(char));
	/* Allocates memory for the ans string */
	if (ans == NULL)
	{
		return (NULL); /* Allocation failed */
	}
	for (i = 0; i < len1; i++)
	{
		ans[i] = s1[i];
	} /* Copies contents of s1 to the ans string */
	for (i = 0; i < len2; i++)
	{
		ans[len1 + i] = s2[i];
	} /* Copies contents of s2 to the ans string */
	ans[len1 + len2] = '\0';
	/* Terminates ans string with null */
	return (ans);
}
