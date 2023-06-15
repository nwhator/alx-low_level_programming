#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to head of the list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		/* Print the value of the current node */
		printf("%d\n", h->n);
		/* Move to the next node */
		h = h->next;
		count++;
	}
	/* Return the total number of nodes */
	return (count);
}
