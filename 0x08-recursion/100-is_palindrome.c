#include "main.h"

/**
 * get_length - Entry point
 * Description: Get the legth
 * @s: Character
 * Return: 1 if palindrome 0 otherwise
 */

int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_length(s + 1));
}

/**
 * check_palindrome - Entry point
 * Description: Checking Palindrome
 * @s: Character
 * @start: Integer
 * @end: Integer
 * Return: 1 if palindrome 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) == *(s + end))
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - Entry point
 * Description: Palindrome
 * @s: Character
 * Return: 1 if palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = get_length(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}
