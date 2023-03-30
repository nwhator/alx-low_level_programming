#include "lists.h"

/**
 * print_list - Entry point
 * Description: Prints all the elements of list_t list
 * @h: Pointer to head of the list
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
	/* Keeps track of number of nodes in the list */
	size_t count_nodes = 0;

	while (h)
	{
		/* If node's string is NULL, print [0] (nil) */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			/* print the node's string and length */
			printf("[%d] %s\n", h->len, h->str);
		}
		count_nodes++;
		h = h->next; /* Move to next node */
	}
	return (count_nodes);
}
