#include "main.h"

/**
 * set_bit - Entry point
 * Description: Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to be changed
 * @index: The index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Checks if index is within range - 8 (number of bits in the data type) */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/*  Set the bit at the given index position to have a value of 1 */
	*n |= (1 << index);

	return (1);
}
