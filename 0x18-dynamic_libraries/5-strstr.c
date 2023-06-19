#include "main.h"

/**
 * *_strstr - Entry point
 * Description: Locates a substring
 * @haystack: Character
 * @needle: Character
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	/* If the needle is an empty string, return the haystack */
	if (*needle == '\0')
	{
		return (haystack);
	}
	/* Loop through the haystack string */
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;
		/* While the current characters of haystack and needle match */
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		/* If we reached the end of the needle, we found a match */
		if (*n == '\0')
		{
			return (haystack);
		}
		/* If not found, keep searching */
		haystack++;
	}
	/* If we reached the end of the haystack and no match, return \0 */
	return ('\0');
}
