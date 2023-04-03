#include "lists.h"

/**
 * listint_len - Entry point
 * Description: Returns the number of elements in a linked listint_t list.
 * @h: Points to the head node of the list
 *
 * Return: Number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	/* Counter initialized to 0 */
	size_t counter = 0;

	while (h)
	{
		counter++;
		/* Moves to next node in list */
		h = h->next;
	}
	return (counter);
}
