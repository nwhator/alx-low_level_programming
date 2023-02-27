#include "main.h"

/**
 * rev_string - Entry point
 * Description: Reverse string
 * @s: Integer
 * Return: char
 */

void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
