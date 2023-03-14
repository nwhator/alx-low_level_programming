#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>

size_t word_len(const char *str);
int count(char *str);
char **strtow(char *str);

/**
 * word_len - Entry point
 * Description: Return the length of the first word in a string
 * @str: Character
 * Return: int
 */

size_t word_len(const char *str)
{
	size_t len;

	/* iterate over the string until the end or the first space is found */
	while (*str && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * count - Entry point
 * Description: Counts the number of words contained within a string
 * @str: The string to be searched
 * Return: char
 */

int count(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		while (isspace(*str))
		{
			str++;
			/* skip whitespace */
		}
		if (*str != '\0')
		{
			words++;
			while (!isspace(*str) && *str != '\0')
			{
				str++;
				/* skip to end of word */
			}
		}
	}
	return (words);
}

/**
 * strtow - Entry point
 * Description: Splits a string into words.
 * @str: Character
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **words, *start, *p;
	int wc, i, word_idx;
	size_t len;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
		/* return NULL if str is NULL or empty */
	}

	/* Count the number of words in the string */
	wc = 0;
	for (p = str; *p != '\0'; p++)
	{
		while (isspace(*p))
		{
			p++;
		}
		if (*p != '\0')
		{
			wc++;
		}
		while (!isspace(*p) && *p != '\0')
		{
			p++;
		}
	}

	/* Allocate memory for the array of strings (words) */
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
	{
		return (NULL);
		/* Memory allocation failed */
	}

	/* Copy each word into its own string in the words array */
	word_idx = 0;
	for (p = str; *p != '\0'; p++ )
	{
		while (isspace(*p))
		{
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		start = p;
		while (!isspace(*p) && *p != '\0')
		{
			p++;
		}
		len = p - start;
		words[word_idx] = malloc(len + 1);
		if (words[word_idx] == NULL)
		{
			/* Mem. alloc. failed, free all previously alloc. mem. and return NULL */
			for (i = 0; i < word_idx; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		memcpy(words[word_idx], start, len);
		words[word_idx][len] = '\0';
		word_idx++;

	}
	words[word_idx] = NULL;
	return (words);
}
