#include "lists.h"

/**
 * print_listint - Entry point
 * Description: Prints all the elements of a listint_t list.
 * @h: Pointer to the first node in the list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/* Count number of nodes */
	size_t counter = 0;

	while (h)
	{
		/* Prints current node */
		printf("%d\n", h->n);
		/* Moves to next node */
		h = h->next;
		counter++;
	}
	return (counter);
}
