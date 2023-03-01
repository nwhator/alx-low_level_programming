#include "main.h"

/**
 * *string_toupper - Entry point
 * Description: Changes all lowercase letter to uppercase
 * @str: Character
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
