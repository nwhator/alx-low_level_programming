#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* Iterate through the list until reaching the end */
	while (h)
	{
		/* Increment the count for each node encountered */
		count++;
		/* Move to the next node */
		h = h->next;
	}
	return (count);
}
