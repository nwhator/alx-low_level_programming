#include "main.h"

/**
 * *leet - Entry point
 * Description: Encodes a string into 1337
 * @str: Character
 * Return: char
 */
char *leet(char *str)
{
	char *enc = str;
	char *letter = "aAeEoOtTlL";
	char *num = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
			{
				enc[i] = num[j];
				break;
			}
		}
	}
	return (enc);
}
