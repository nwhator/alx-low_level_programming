#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description: Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if b is NULL or there's a non 0 or 1 char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0;
	unsigned int i = 0;

	/* Check if b is NULL */
	if (!b)
	{
		return (0);
	}
	/* Loop: gets the length of the binary string */
	while (b[i] != '\0')
	{
		/* Checks if char is not 0 or 1 */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	/* Get the decimal value of the binary string */
	i = 0;
	while (b[i] != '\0')
	{
		/* Left shift the digit by 1 bit or space */
		digit <<= 1;
		if (b[i] == '1')
		{
			digit += 1;
		}
		i++;
	}
	return (digit);
}
