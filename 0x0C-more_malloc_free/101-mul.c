#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - Entry point
 * Description: checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);

		k++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, n, carry, digit1, digit2, *matrix, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		errors();
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	matrix = malloc(sizeof(int) * len);

	if (!matrix)
	{
		return (1);
	}
	for (n = 0; n <= len1 + len2; n++)
	{
		matrix[n] = 0;
	}
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
	}
	for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
	{
		digit2 = s2[len2] - '0';
		carry += matrix[len1 + len2 + 1] + (digit1 * digit2);
		matrix[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
	{
		matrix[len1 + len2 + 1] += carry;
	}
	for (n = 0; n < len - 1; n++)
	{
		if (matrix[n])
			a = 1;

		if (a)
			_putchar(matrix[n] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(matrix);
	return (0);
}
