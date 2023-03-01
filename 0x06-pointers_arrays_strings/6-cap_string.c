#include "main.h"

/**
 * *cap_string - Entry point
 * Description: Capitalizes all words of a string
 * @str: Character
 * Return: char
 */

char *cap_string(char *str)
{
	int i = 0;
	int cap = 1; /* Capitalize the first letter */

	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap = 1; /* Set flag to capitalize next letter */
				break;
			default:
				if (cap)
				{
					/* capitalize current letter */
					str[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 'a' + 'A' : str[i];
					cap = 0; /* Clear flag*/
				}
				break;
		}
		i++;
	}
	return (str);
}
