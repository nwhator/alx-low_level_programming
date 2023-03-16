#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - Entry point
 * Description: Concatenates two strings
 * @s1: Character
 * @s2: Character
 * @n: Integer
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len;
	char *result;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	/* Get the length of the two input strings */
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
		/* Set n to the smaller of n and the length of s2 */
	}
	/* Allocate memory for the result string */
	result = malloc(s1_len + n + 1);
	if (!result)
	{
		return (NULL);
	}

	/* Copy s1 to the beginning of the result string. */
	memcpy(result, s1, s1_len);
	/* Copy the first n bytes of s2 to the end of the result string. */
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
