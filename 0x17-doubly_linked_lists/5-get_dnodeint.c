#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		/* Check if current count matches desired index */
		if (count == index)
		{
			return (head);
		}
		/* Move to the next node */
		head = head->next;
		count++;
	}
	/* Node at the desired index doesn't exist */
	return (NULL);
}
