#include "lists.h"

/**
 * list_len - Entry point
 * Description: Returns number of elements in linked list_t list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		/* Increment count for each node */
		count_nodes++;
		/* Next node */
		h = h->next;
	}
	return (count_nodes);
}
