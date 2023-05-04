#include "main.h"

/**
 * get_bit - Entry point
 * Description: Returns the value of a bit at a given index
 * @n: Number to get the bit from
 * @index: The index, starting from 0 of the bit you want to get
 *
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Checks if index is within range - 8 (number of bits in the data type) */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/* Right shift the number n by index bits of postions */
	n >>= index;
	/* Checks  if bit at the rightmost ends with 1, return 1 or 0, return 0 */
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
