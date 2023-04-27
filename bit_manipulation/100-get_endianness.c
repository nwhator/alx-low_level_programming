#include "main.h"

/**
 * get_endianness - Entry point
 * Description: Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int digit = 1;
	/* Convert the memory address of the int digit into a pointer to a char */
	char *data = (char *)&digit;

	if (*data)
	{
		/* Little endian */
		return (1);
	}
	else
	{
		/* Big endian */
		return (0);
	}
}
